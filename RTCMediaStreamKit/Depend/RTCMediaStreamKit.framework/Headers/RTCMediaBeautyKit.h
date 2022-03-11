//
//  RTCMediaBeautyKit.h
//  RTCMediaStreamKit
//
//  Created by SailorGa on 2022/3/10.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - 日志等级
/**
 日志等级

 - RTCBeautyLogLevelTrace: TRACE
 - RTCBeautyLogLevelDebug: DEBUG
 - RTCBeautyLogLevelInfo: INFO
 - RTCBeautyLogLevelWarn: WARN
 - RTCBeautyLogLevelError: ERROR
 - RTCBeautyLogLevelCritical: CRITICAL
 - RTCBeautyLogLevelOff: OFF
*/
typedef NS_ENUM(NSInteger, RTCBeautyLogLevel) {
    
    RTCBeautyLogLevelTrace = 0,
    RTCBeautyLogLevelDebug = 1,
    RTCBeautyLogLevelInfo = 2,
    RTCBeautyLogLevelWarn = 3,
    RTCBeautyLogLevelError = 4,
    RTCBeautyLogLevelCritical = 5,
    RTCBeautyLogLevelOff = 6,
};

@interface RTCMediaBeautyKit : NSObject

#pragma mark - -------- 美颜配置属性 ---------
/// 磨皮程度，取值范围 0.0-1.0，默认0.5
@property (nonatomic, assign) double blurLevel;
/// 美白程度，取值范围 0.0-1.0，默认值0.3
@property (nonatomic, assign) double whiteLevel;
/// 红润程度，取值范围 0.0-1.0，默认值0.3
@property (nonatomic, assign) double redLevel;
/// 锐化程度，取值范围 0.0-1.0，默认0.3
@property (nonatomic, assign) double sharpen;
/// 设置滤镜，取值为一个字符串，默认值为 “origin” ，origin即为使用原图效果
@property (nonatomic, strong) NSString *filterName;
/// 滤镜程度，取值范围 0.0-1.0，默认值1.0
@property (nonatomic, assign) double filterLevel;


#pragma mark - -------- 美颜启用状态 ---------
/// 服务启用状态
@property (nonatomic, assign, readonly) BOOL serviceEnabled;
/// 美颜启用状态
@property (nonatomic, assign, readonly) BOOL beautyEnabled;


#pragma mark - 获取美颜实例对象
/// 获取美颜实例对象
+ (RTCMediaBeautyKit *)shareInstance;

#pragma mark - 初始化美颜服务
/// 初始化美颜服务
/// @param authData 密钥地址
/// @param authDataSize 密钥长度
/// @param logLevel 日志等级
- (BOOL)initializeRenderKit:(char *)authData authDataSize:(int)authDataSize logLevel:(RTCBeautyLogLevel)logLevel;

#pragma mark - 设置美颜开关
/// 设置美颜开关
/// @param enabled 开/关
- (BOOL)onBeautySwitch:(BOOL)enabled;

#pragma mark - 渲染视频数据
/// 渲染视频数据
/// @param pixelBuffer 原数据
- (CVPixelBufferRef)renderWithInput:(CVPixelBufferRef)pixelBuffer;

#pragma mark - 销毁释放美颜资源
/// 销毁释放美颜资源
- (void)destroy;

@end

NS_ASSUME_NONNULL_END
