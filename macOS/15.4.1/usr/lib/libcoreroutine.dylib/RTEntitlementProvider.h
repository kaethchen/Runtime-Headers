@class NSDictionary, Protocol;

@interface RTEntitlementProvider : NSObject

@property (retain, nonatomic) NSDictionary *entitlementsDictionary;
@property (readonly, nonatomic) Protocol *protocol;

+ (id)daemonProtocolEntitlementProvider;
+ (id)helperServiceProtocolEntitlementProvider;
+ (id)internalDaemonProtocolEntitlementProvider;
+ (id)safetyMonitorDaemonProtocolEntitlementProvider;
+ (id)selectorsForProtocol:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)clientConnection:(id)a0 satisfiesEntitlementRequirementsForInvocation:(id)a1;
- (BOOL)clientConnection:(id)a0 hasEntitlement:(id)a1;
- (id)initWithProtocol:(id)a0 entitlementsDictionary:(id)a1;

@end
