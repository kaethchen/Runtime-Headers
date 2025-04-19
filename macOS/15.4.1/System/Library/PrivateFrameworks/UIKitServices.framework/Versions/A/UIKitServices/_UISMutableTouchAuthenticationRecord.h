@class BKSWindowServerHitTestSecurityAnalysis, NSString;

@interface _UISMutableTouchAuthenticationRecord : _UISTouchAuthenticationRecord

@property (retain, nonatomic) BKSWindowServerHitTestSecurityAnalysis *securityAnalysis;
@property (copy, nonatomic) NSString *hostBundleId;
@property (copy, nonatomic) NSString *hostSDKVersion;
@property (nonatomic) BOOL hostIsInternal;
@property (copy, nonatomic) NSString *serviceBundleId;
@property (nonatomic) long long serviceInstanceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHostBundleId:(id)a0;
- (void)setHostIsInternal:(BOOL)a0;
- (void)setHostSDKVersion:(id)a0;
- (void)setSecurityAnalysis:(id)a0;
- (void)setServiceBundleId:(id)a0;
- (void)setServiceInstanceIdentifier:(long long)a0;

@end
