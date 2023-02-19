//
//  CIShareTool.h
//  CIShare
//
//  Created by daben on 2023/1/10.
//

#import <Foundation/Foundation.h>
#import "CIShareConst.h"

NS_ASSUME_NONNULL_BEGIN

// 持续向外回调消息
typedef void(^ShareResultCallback)(NSInteger callbackType, NSString * _Nullable callbackName, id _Nullable callbackParams, NSString * _Nullable errorString);

typedef NSDictionary<CIShareResKey, id> CIShareRes;

@interface CIShareTool : NSObject

+ (instancetype)tool;

/// 验证命令是否有效
/// @param command 命令
- (BOOL)canIUse:(NSString *)command;

/**
 Share消息分发
 
 @param message JS消息体
 @param callback 消息回调
 @discussion 该方法属于CIShareTool消息分发器，所有和Share相关的消息都通过该方法进行转发
 */
- (void)dispatchJSMessage:(NSDictionary *)message callback:(ShareResultCallback)callback;

@end

NS_ASSUME_NONNULL_END
