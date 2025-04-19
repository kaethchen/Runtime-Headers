@class NSString;

@interface MDMProvisioningProfile : NSObject <MDMProvisioningProfileProtocol>

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *allowedAppIDEntitlement;
@property (readonly, nonatomic) BOOL isAppleInternal;
@property (readonly, nonatomic) BOOL isBeta;
@property (readonly, nonatomic) BOOL isFreePP;
@property (readonly, nonatomic) BOOL isUniversalPP;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)allowsAppIDEntitlement:(id)a0;

@end
