@class NSString, AFOutputVoiceDescriptor;

@interface _AFOutputVoiceDescriptorMutation : NSObject <AFOutputVoiceDescriptorMutating> {
    AFOutputVoiceDescriptor *_base;
    NSString *_localizedDisplay;
    NSString *_localizedDisplayWithRegion;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasLocalizedDisplay : 1; unsigned char hasLocalizedDisplayWithRegion : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (id)getLocalizedDisplay;
- (id)getLocalizedDisplayWithRegion;
- (id)initWithBase:(id)a0;
- (void)setLocalizedDisplay:(id)a0;
- (void)setLocalizedDisplayWithRegion:(id)a0;

@end
