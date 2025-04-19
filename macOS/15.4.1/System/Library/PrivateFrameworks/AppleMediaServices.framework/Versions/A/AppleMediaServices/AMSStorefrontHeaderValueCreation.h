@class NSString, ACAccount, NSError;
@protocol AMSBagProtocol;

@interface AMSStorefrontHeaderValueCreation : NSObject

+ (id)combinedStorefrontFromStorefront:(id)a0 suffix:(id)a1 error:(id *)a2;
+ (void)storefrontHeaderValueForAccount:(ACAccount *)a0 bag:(id<AMSBagProtocol>)a1 mediaType:(NSString *)a2 allowFailedSuffixFetch:(BOOL)a3 completionHandler:(void (^)(NSString *, NSError *))a4;

- (id)init;

@end
