@class NSString;

@interface CTXPCConvertCountryCodeToISORequest : CTXPCRequestMessage

@property (readonly, nonatomic) NSString *mcc;

- (int)requiredEntitlement;
- (id)initWithMcc:(id)a0;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
