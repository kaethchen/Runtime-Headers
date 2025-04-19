@class NSDictionary, BKSWindowServerHitTestSecurityAnalysis, NSString;

@interface _UISTouchAuthenticationRecord : NSObject <BSDescriptionStreamable, NSCopying> {
    BKSWindowServerHitTestSecurityAnalysis *_securityAnalysis;
    NSString *_hostBundleId;
    NSString *_hostSDKVersion;
    BOOL _hostIsInternal;
    NSString *_serviceBundleId;
    long long _serviceInstanceIdentifier;
    unsigned long long _creationTime;
}

@property (readonly, nonatomic) NSDictionary *sysdiagnosePayload;
@property (readonly, nonatomic) double timeSinceCreation;
@property (readonly, nonatomic) BOOL passesSecurityAnalysis;
@property (readonly, nonatomic) BKSWindowServerHitTestSecurityAnalysis *securityAnalysis;
@property (readonly, copy, nonatomic) NSString *hostBundleId;
@property (readonly, copy, nonatomic) NSString *hostSDKVersion;
@property (readonly, nonatomic) BOOL hostIsInternal;
@property (readonly, copy, nonatomic) NSString *serviceBundleId;
@property (readonly, nonatomic) long long serviceInstanceIdentifier;
@property (readonly, nonatomic) BOOL shouldAllowEvents;
@property (nonatomic) BOOL eventLeadToSensitiveDataTransmission;
@property (readonly, nonatomic) BOOL touchIsAuthentic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (BOOL)shouldAuthenticateServiceBundleId:(id)a0;
+ (id)build:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initWithCopyOf:(id)a0;
- (id)analyticsPayloadWithDuration:(BOOL)a0;
- (BOOL)canCoalesceWithRecord:(id)a0;
- (id)initWithSecurityAnalysis:(id)a0 timestamp:(double)a1 hostBundleId:(id)a2 hostSDKVersion:(id)a3 hostIsInternal:(BOOL)a4 serviceBundleId:(id)a5;

@end
