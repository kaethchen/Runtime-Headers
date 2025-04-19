@class NSImage, NSString, NSURL;

@interface SearchUI.SearchUICalculateUIUtilities : NSObject

+ (void)currencyConversionProviderImageWithCompletionHandler:(void (^)(NSImage *))a0;
+ (void)currencyConversionProviderNameWithCompletionHandler:(void (^)(NSString *))a0;
+ (void)currencyConversionProviderURLWithCompletionHandler:(void (^)(NSURL *))a0;

- (id)init;

@end
