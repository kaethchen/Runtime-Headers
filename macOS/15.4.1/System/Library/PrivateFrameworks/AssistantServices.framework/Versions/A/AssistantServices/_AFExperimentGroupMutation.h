@class NSString, AFExperimentGroup, NSDictionary;

@interface _AFExperimentGroupMutation : NSObject <AFExperimentGroupMutating> {
    AFExperimentGroup *_base;
    NSString *_identifier;
    unsigned long long _allocation;
    NSDictionary *_properties;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasIdentifier : 1; unsigned char hasAllocation : 1; unsigned char hasProperties : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setIdentifier:(id)a0;
- (BOOL)isDirty;
- (void)setProperties:(id)a0;
- (id)getProperties;
- (id)getIdentifier;
- (unsigned long long)getAllocation;
- (id)initWithBase:(id)a0;
- (void)setAllocation:(unsigned long long)a0;

@end
