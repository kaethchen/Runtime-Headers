@class NSXPCConnection, NSString, HDXPCProcess, _HKEntitlements, HDClientAuthorizationOracle, HDProfile, HDXPCClient, _TtC12HealthDaemon29HDHealthStoreClientAssertions, HKHealthStoreConfiguration;

@interface HDHealthStoreClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertyLock;
}

@property (readonly) _TtC12HealthDaemon29HDHealthStoreClientAssertions *databaseAccessibilityAssertions;
@property (readonly) HDXPCClient *XPCClient;
@property (readonly) HDProfile *profile;
@property (readonly) _HKEntitlements *entitlements;
@property (readonly) HDClientAuthorizationOracle *authorizationOracle;
@property (readonly) NSXPCConnection *connection;
@property (readonly) HDXPCProcess *process;
@property (readonly, copy) HKHealthStoreConfiguration *configuration;
@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly, copy) NSString *sourceVersion;
@property (readonly, copy) NSString *defaultSourceBundleIdentifier;

- (void).cxx_destruct;
- (id)valueForEntitlement:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (BOOL)hasPrivateMetadataAccess;
- (BOOL)hasArrayEntitlement:(id)a0 containing:(id)a1;
- (BOOL)_isAuthorizedToAccessProfile:(id)a0;
- (id)accessibilityAssertions;
- (void)addAssertionMapping:(id)a0;
- (id)assertionForHKDatabaseAccessibilityAssertion:(id)a0;
- (id)baseDataEntityEncodingOptions;
- (id)filterWithQueryFilter:(id)a0 objectType:(id)a1;
- (id)firstAssertion;
- (BOOL)hasRequiredArrayEntitlement:(id)a0 containing:(id)a1 error:(id *)a2;
- (BOOL)hasRequiredEntitlement:(id)a0 error:(id *)a1;
- (id)initWithXPCClient:(id)a0 configuration:(id)a1 profile:(id)a2 databaseAccessibilityAssertions:(id)a3;
- (void)invalidateAssertions;
- (void)removeAssertionMappingForAssertion:(id)a0;
- (BOOL)shouldBypassAuthorization;
- (BOOL)verifyHealthRecordsPermissionGrantedWithError:(id *)a0;

@end
