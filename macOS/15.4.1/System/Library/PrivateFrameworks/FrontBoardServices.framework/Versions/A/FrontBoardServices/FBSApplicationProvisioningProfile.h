@class NSString, NSDate;

@interface FBSApplicationProvisioningProfile : NSObject {
    NSString *_allowedApplicationIdentifierEntitlement;
}

@property (readonly, copy, nonatomic) NSString *signerIdentity;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isAppleInternalProfile) BOOL appleInternalProfile;
@property (readonly, nonatomic, getter=isBeta) BOOL beta;
@property (readonly, nonatomic, getter=isFreeDeveloperProfile) BOOL freeDeveloperProfile;
@property (readonly, nonatomic) BOOL provisionsAllDevices;
@property (readonly, copy, nonatomic) NSString *UUID;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithSignerIdentity:(id)a0 profile:(id)a1;
- (BOOL)allowsApplicationIdentifierEntitlement:(id)a0;

@end
