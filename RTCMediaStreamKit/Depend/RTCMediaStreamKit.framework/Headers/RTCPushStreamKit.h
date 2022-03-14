//
//  RTCPushStreamKit.h
//  RTCMediaStreamKit
//
//  Created by SailorGa on 2022/3/14.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RTCPushStreamKit : NSObject

#pragma mark - 获取实例对象
/// 获取实例对象
+ (RTCPushStreamKit *)shareInstance;

#pragma mark - 获取推流首页
/// 获取推流首页
/// @param authData 美颜密钥地址
/// @param authDataSize 美颜密钥长度
- (UINavigationController *)getPushStreamHomeViewController:(char *)authData authDataSize:(int)authDataSize;

@end

NS_ASSUME_NONNULL_END
