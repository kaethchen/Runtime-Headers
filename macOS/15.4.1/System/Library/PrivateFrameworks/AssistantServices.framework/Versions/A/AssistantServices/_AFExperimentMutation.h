@class NSString, NSDictionary, AFExperiment;

@interface _AFExperimentMutation : NSObject <AFExperimentMutating> {
    AFExperiment *_base;
    NSString *_configurationIdentifier;
    NSString *_configurationVersion;
    NSString *_deploymentGroupIdentifier;
    NSDictionary *_deploymentGroupProperties;
    long long _deploymentReason;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasConfigurationIdentifier : 1; unsigned char hasConfigurationVersion : 1; unsigned char hasDeploymentGroupIdentifier : 1; unsigned char hasDeploymentGroupProperties : 1; unsigned char hasDeploymentReason : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (id)getConfigurationIdentifier;
- (id)getConfigurationVersion;
- (id)getDeploymentGroupIdentifier;
- (id)getDeploymentGroupProperties;
- (long long)getDeploymentReason;
- (id)initWithBase:(id)a0;
- (void)setConfigurationIdentifier:(id)a0;
- (void)setConfigurationVersion:(id)a0;
- (void)setDeploymentGroupIdentifier:(id)a0;
- (void)setDeploymentGroupProperties:(id)a0;
- (void)setDeploymentReason:(long long)a0;

@end
