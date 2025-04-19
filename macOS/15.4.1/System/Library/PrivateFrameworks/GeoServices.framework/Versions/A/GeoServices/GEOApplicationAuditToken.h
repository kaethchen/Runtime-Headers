@class NSString, NSMutableDictionary, NSData, geo_isolater;

@interface GEOApplicationAuditToken : NSObject <NSCopying, NSSecureCoding, GEOXPCSerializable> {
    geo_isolater *_isolater;
    NSData *_tokenData;
    NSString *_resolvedBundleId;
    NSString *_resolvedNetworkAttributionBundleId;
    NSMutableDictionary *_entitlementValueCache;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic, getter=_secondaryIdentifier) NSString *secondaryIdentifier;
@property (readonly, nonatomic) NSString *proxiedBundleId;
@property (readonly, nonatomic, getter=isProxiedExternalBundleId) BOOL proxiedExternalBundleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compositeTokenForTokens:(id)a0;
+ (id)currentProcessAuditToken;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCConnection:(id)a0;
- (id)valueForEntitlement:(id)a0;
- (id)bundleId;
- (BOOL)hasEntitlement:(id)a0;
- (id)initCommon;
- (id)_bundleIdForAuditToken;
- (id)_valueForEntitlement:(id)a0;
- (id)backingTokenData;
- (id)bundleIdForNetworkAttribution;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithAuditTokenData:(id)a0;
- (id)initWithNSXPCConnection:(id)a0;
- (id)initWithProxiedApplicationBundleId:(id)a0;
- (id)initWithProxiedExternalApplicationBundleId:(id)a0;
- (id)initWithSecondaryIdentifier:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (id)overrideTokenWithProxiedBundleId:(id)a0;
- (id)publicLogDescription;
- (id)valuesForEntitlement:(id)a0;

@end
