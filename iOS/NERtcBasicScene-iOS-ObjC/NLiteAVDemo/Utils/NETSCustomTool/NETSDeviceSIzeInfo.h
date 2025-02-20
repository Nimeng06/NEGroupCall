//
//  NETSDeviceSIzeInfo.h
//  NLiteAVDemo
//
//  Created by 徐善栋 on 2020/12/31.
//  Copyright © 2020 Netease. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NETSDeviceSIzeInfo : NSObject
/**
 是否是留海屏

 @return 是true 否 false
 */
+ (BOOL)isIPhoneXSeries;


/**
 获取设备底部TabBar高度(包括容器子视图)

 @return 设备底部TabBar高度
 */
+ (CGFloat)get_iPhoneTabBarHeight;

/**
 获取设备顶部NavBar高度(包括容器子视图，包含状态栏高度)
 
 @return 设备顶部NavBar高度
 */
+ (CGFloat)get_iPhoneNavBarHeight;

/**
 获取底部留海距离

 @return 底部安全距离
 */
+ (CGFloat)get_iPhoneBottomSafeDistance;

@end

NS_ASSUME_NONNULL_END
