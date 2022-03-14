//
//  RTCMediaStreamKit.h
//  RTCMediaStreamKit
//
//  Created by SailorGa on 2022/3/3.
//

#import <Foundation/Foundation.h>

#if __has_include(<RTCMediaStreamKit/RTCMediaStreamKit.h>)
#import <RTCMediaStreamKit/RTCMediaBeautyKit.h>
#import <RTCMediaStreamKit/RTCPushStreamKit.h>
#import <RTCMediaStreamKit/RTCMediaObjects.h>
#import <RTCMediaStreamKit/RTYUVPlayer.h>
#else
#import "RTCMediaBeautyKit.h"
#import "RTCPushStreamKit.h"
#import "RTCMediaObjects.h"
#import "RTYUVPlayer.h"
#endif

NS_ASSUME_NONNULL_BEGIN

@interface RTCMediaStreamKit : NSObject

#pragma mark - 获取实例对象
/// 获取实例对象
+ (RTCMediaStreamKit *)shareInstance;

#pragma mark - 推流SDK版本
///  推流SDK版本
- (NSString *)version;

#pragma mark - 推流SDK版本信息
/// 推流SDK版本信息
- (NSString *)versionInfo;

#pragma mark - 初始化会话实例
/// 初始化会话实例
/// @param mediaConfig 配置参数
/// @param pushUrl 推流地址
/// 返回值：YES-成功，NO-失败
- (BOOL)initializeWithConfig:(RTCMediaConfig *)mediaConfig pushUrl:(NSString *)pushUrl;

#pragma mark - 加载预览
/// 加载预览
/// @param displayView 预览目标组件
- (void)loadPreviewViewWithDisplayView:(RTYUVPlayer *)displayView;

#pragma mark - 开始推流
/// 开始推流
- (void)startPushStream;

#pragma mark - 停止推流
/// 停止推流
- (void)stopPushStream;

#pragma mark - 开启视频推流
/// 开启视频推流
- (void)startVideoStream;

#pragma mark - 停止视频推流
/// 停止视频推流
- (void)stopVideoStream;

#pragma mark - 开始音频推流
/// 开始音频推流
- (void)startAudioStream;

#pragma mark - 停止音频推流
/// 停止音频推流
- (void)stopAudioStream;

#pragma mark - 切换摄像头
/// 切换摄像头
- (void)switchCamera;

#pragma mark - 切换屏幕方向
/// 切换屏幕方向
/// @param orientation 预览画面方向
/// @param previewSize 预览画面尺寸
- (void)changeScreenOrientation:(UIInterfaceOrientation)orientation previewSize:(CGSize)previewSize;

#pragma mark - 销毁释放RTC资源
/// 销毁释放RTC资源
- (void)destroy;

@end

NS_ASSUME_NONNULL_END
