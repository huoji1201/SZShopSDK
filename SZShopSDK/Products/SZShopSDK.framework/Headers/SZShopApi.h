//
//  SZShoopApi.h
//  SZShopSDK
//
//  Created by 武倩辉 on 2020/10/13.
//

#import <Foundation/Foundation.h>
@protocol SZShopDelegate <NSObject>

@end

NS_ASSUME_NONNULL_BEGIN

@interface SZShopApi : NSObject

+ (instancetype)shareSDKWithAppid:(NSString *)appid delegate:(id<SZShopDelegate>)delegate;

+ (void)initShopWithSource:(UIViewController *)sourceVc loadType:(NSInteger)type path:(NSURL *)path;

@end

NS_ASSUME_NONNULL_END
