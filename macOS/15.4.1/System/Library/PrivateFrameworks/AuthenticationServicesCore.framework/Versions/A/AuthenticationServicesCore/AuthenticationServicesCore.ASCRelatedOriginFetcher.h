@class NSString, NSError;

@interface AuthenticationServicesCore.ASCRelatedOriginFetcher : NSObject <NSURLSessionDelegate>

- (id)init;
- (void)isOrigin:(NSString *)a0 relatedToRelyingPartyIdentifier:(NSString *)a1 completionHandler:(void (^)(BOOL, NSError *))a2;

@end
