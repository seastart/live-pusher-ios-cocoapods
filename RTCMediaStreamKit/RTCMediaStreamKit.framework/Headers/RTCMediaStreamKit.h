//
//  RTCMediaStreamKit.h
//  RTCMediaStreamKit
//
//  Created by SailorGa on 2022/3/3.
//

#import <Foundation/Foundation.h>

#if __has_include(<RTCMediaStreamKit/RTCMediaStreamKit.h>)
#import <RTCMediaStreamKit/RTCMediaObjects.h>
#import <RTCMediaStreamKit/RTYUVPlayer.h>
#else
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
/// 返回值：YES-成功，NO-失败
- (BOOL)initializeWithConfig:(RTCMediaConfig *)mediaConfig;

#pragma mark - 设置推流
/// 设置推流
/// @param pushUrl 推流地址
/// 返回值：YES-成功，NO-失败
- (BOOL)setStreamWithPushUrl:(NSString *)pushUrl;

#pragma mark - 开启摄像头
/// 开启摄像头
/// @param displayView 渲染的目标组件
- (void)onCameraViewWithDisplayView:(RTYUVPlayer *)displayView;

#pragma mark - 开启视频采集
/// 开启视频采集
- (void)startVideoCapture;

#pragma mark - 停止视频采集
/// 停止视频采集
- (void)stopVideoCapture;

#pragma mark - 开始音频采集
/// 开始音频采集
- (void)startAudioCapture;

#pragma mark - 停止音频采集
/// 停止采集
- (void)stoAudioCapture;

#pragma mark 销毁释放RTC资源
/// 销毁释放RTC资源
- (void)destroy;

@end

NS_ASSUME_NONNULL_END
