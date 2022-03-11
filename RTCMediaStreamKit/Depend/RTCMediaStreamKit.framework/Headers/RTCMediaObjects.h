//
//  RTCMediaObjects.h
//  RTCMediaStreamKit
//
//  Created by SailorGa on 2022/3/3.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RTCMediaConfig : NSObject

/// 分辨率宽 默认720
@property (nonatomic, assign) int width;
/// 分辨率高 默认1280
@property (nonatomic, assign) int height;
/// 帧率 默认25
@property (nonatomic, assign) int fps;
/// 码率 默认900*1024
@property (nonatomic, assign) int vbirate;
/// 音频采样率 默认48000
@property (nonatomic, assign) int sampleRate;

/// 设备方向 默认 UIInterfaceOrientationPortrait
@property(nonatomic, assign) UIInterfaceOrientation orientation;

@end

NS_ASSUME_NONNULL_END
