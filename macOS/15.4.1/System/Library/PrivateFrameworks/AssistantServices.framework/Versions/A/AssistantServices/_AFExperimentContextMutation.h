@class NSString, AFExperimentContext, NSDictionary;

@interface _AFExperimentContextMutation : NSObject <AFExperimentContextMutating> {
    AFExperimentContext *_base;
    NSDictionary *_experimentsByConfigurationIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasExperimentsByConfigurationIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (id)getExperimentsByConfigurationIdentifier;
- (id)initWithBase:(id)a0;
- (void)setExperimentsByConfigurationIdentifier:(id)a0;

@end
