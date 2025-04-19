@class NSString, NSDictionary;

@interface AMSChannelLinkRequestParametersBuilder : NSObject

+ (void)linkRequestParametersWithGuid:(NSString *)a0 linkParams:(NSString *)a1 productCode:(NSString *)a2 additionalParameters:(NSDictionary *)a3 customerID:(NSString *)a4 pacPromise:(id)a5 completionHandler:(void (^)(NSDictionary *))a6;

- (id)init;

@end
