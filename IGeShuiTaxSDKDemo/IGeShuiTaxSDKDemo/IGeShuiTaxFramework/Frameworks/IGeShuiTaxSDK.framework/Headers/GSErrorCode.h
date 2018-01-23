//
//  GSErrorCode.h
//  BaseSDK
//
//  Created by xinwang on 2017/12/19.
//  Copyright © 2017年 杭州薪王信息技术有限公司. All rights reserved.
//

#ifndef GSErrorCode_h
#define GSErrorCode_h


/**
    错误码
 */
typedef enum {
    
    GSErrorNone = 1000,                    // 无错误
    GSErrorNoAutioPermission = 1001,       // 没有授权/查询权限
    GSErrorPassAutioPermission = 1002,     // 授权/查询权限过期
    GSErrorNetworkFailed = 1003,           // 网络连接失败
    GSErrorNetworkMaintain = 1004,         // 服务器维护中
    GSErrorUnknow = 1005,                  /*! \~chinese 未知错误 \~english General error */
    
} GSErrorCode;


#endif /* GSErrorCode_h */
