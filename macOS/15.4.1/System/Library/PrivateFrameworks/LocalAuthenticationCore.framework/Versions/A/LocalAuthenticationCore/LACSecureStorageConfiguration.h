@interface LACSecureStorageConfiguration : NSObject

@property (readonly, nonatomic) BOOL bypassEntitlementChecks;

- (id)initWithBypassEntitlementChecks:(BOOL)a0;

@end
