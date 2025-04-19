@class ICStoreRequestContext, NSUUID;

@interface ICMusicSubscriptionStatusRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL shouldBypassEnforcementOfPrivacyAcknowledgement;
@property (copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (nonatomic) long long reason;
@property (nonatomic) BOOL shouldIgnoreCache;
@property (nonatomic) BOOL allowsFallbackToExpiredStatus;
@property (nonatomic) BOOL allowsFallbackToStatusNeedingReload;
@property (nonatomic) BOOL shouldReturnLastKnownStatusOnly;
@property (nonatomic) long long carrierBundleProvisioningStyle;
@property (readonly, nonatomic) NSUUID *requestIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreRequestContext:(id)a0;

@end
