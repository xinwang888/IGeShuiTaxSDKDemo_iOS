//
//  GSTaxManage.h
//  BaseSDK
//
//  Created by xinwang on 2017/12/8.
//  Copyright © 2017年 杭州薪王信息技术有限公司. All rights reserved.
//  Version: 0.0.1

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "GSTaxConfiguration.h"
#import "GSErrorCode.h"

/**
    个税登录返回结果,成功失败都会调用
 
    @param orderNumber 查询成功返回的订单号，用于调用用户个税详情，失败为nil
    @param errorCode 查询结果状态
 */
typedef void(^GSResultBlock)(NSString *orderNumber, GSErrorCode errorCode);


@interface GSTaxManage : NSObject


/**
 *  默认定位城市名 可选 存在时优先于定位信息
 */
@property (nonatomic, strong) NSString *defaultCityName;

/**
 *  默认定位城市ID 同上
 */
@property (nonatomic, strong) NSString *defaultCityId;


/**
 个税授权/查询结果错误码
 */
@property (nonatomic) GSErrorCode code;

/**
 *  UI配置项
 */
@property (nonatomic, strong) GSTaxConfiguration *configuration;


/**
 个税授权/查询接口

 @param apiKey 授权key
 @param uid 用户唯一id, 需商户自行设定
 @param result 结果返回
 */
- (void)requestGSWithApiKey:(NSString *)apiKey uid:(NSString *)uid completionBlock:(GSResultBlock)result originViewController:(UIViewController *)viewController;


@end
