//
//  SZTool.h
//  SZShopSDK
//
//  Created by 武倩辉 on 2020/10/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SZTool : NSObject

/// 获取图片
/// @param name 图片名称  例：icon@2x.png
/// @param bundleName bundle名称
+ (UIImage *)imageNamed:(NSString *)name ofBundle:(NSString *)bundleName;

/// 获取bundle
/// @param bundleName bundle名称
+ (NSBundle *)getBundleWithName:(NSString *)bundleName;

/// 获取txt文本数据 JSON 格式
/// @param name 文件名称
/// @param bundleName bundle名称
+ (NSDictionary *)jsonTxtName:(NSString *)name ofbundle:(NSString *)bundleName;

@end

NS_ASSUME_NONNULL_END
