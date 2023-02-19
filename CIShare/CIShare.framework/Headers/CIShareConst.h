//
//  CIShareConst.h
//  CIShare
//
//  Created by daben on 2023/1/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 回调类型
typedef NS_ENUM(NSUInteger, CIShareJSCallbackType) {
    CIShareJSCallbackTypeNormal, // 普通回调
    CIShareJSCallbackTypeSubscribe // 订阅回调
};

/// 参数名
typedef NSString * CIShareParamName;

/// api
FOUNDATION_EXPORT CIShareParamName const CIShareParamAPIName;
/// callbackId
FOUNDATION_EXPORT CIShareParamName const CIShareParamCallbackIdName;
/// scheme
FOUNDATION_EXPORT CIShareParamName const CIShareParamSchemeName;
/// packageName
FOUNDATION_EXPORT CIShareParamName const CIShareParamPackageNameName;
/// extra
FOUNDATION_EXPORT CIShareParamName const CIShareParamExtraName;


/// 响应：Native回调给小程序（网页）
typedef NSString * CIShareResKey;
/// 错误码（小程序框架设计如此：errMsg=ok代表成功，errMsg=fail代表失败）
/// 使用示例：@{CIShareResStatusKey : CIShareResStatusSuccess, CIShareResStatusMessageKey : @"This response is success"}
FOUNDATION_EXPORT CIShareResKey const CIShareResStatusKey;
FOUNDATION_EXPORT CIShareResKey const CIShareResStatusSuccess;
FOUNDATION_EXPORT CIShareResKey const CIShareResStatusFailure;
FOUNDATION_EXPORT CIShareResKey const CIShareResStatusMessageKey;

@interface CIShareConst : NSObject

@end

NS_ASSUME_NONNULL_END
