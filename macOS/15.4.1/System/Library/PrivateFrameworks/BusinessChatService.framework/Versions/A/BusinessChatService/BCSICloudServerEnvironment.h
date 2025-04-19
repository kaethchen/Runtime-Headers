@class NSString, NSDictionary;
@protocol BCSUserDefaultsProviding;

@interface BCSICloudServerEnvironment : NSObject <BSDescriptionProviding, BCSICloudServerEnvironmentProtocol, BCSPIRServerEnvironmentProviding>

@property (readonly, nonatomic) id<BCSUserDefaultsProviding> userDefaults;
@property (readonly, nonatomic, getter=isInternalInstall) BOOL isInternalInstall;
@property (readonly, nonatomic, getter=isStagingMode) BOOL isStagingMode;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *containerID;
@property (readonly, nonatomic) long long containerEnvironment;
@property (readonly, nonatomic) NSDictionary *additionalRequestHTTPHeaders;

- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)_productionContainerID;
- (id)initWithUserDefaults:(id)a0 isInternalInstall:(BOOL)a1 type:(long long)a2;
- (id)pirEnvironmentForServerType:(long long)a0;

@end
