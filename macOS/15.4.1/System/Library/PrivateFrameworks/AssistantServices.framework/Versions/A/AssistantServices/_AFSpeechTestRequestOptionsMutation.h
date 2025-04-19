@class NSString, NSArray, AFSpeechTestRequestOptions;

@interface _AFSpeechTestRequestOptionsMutation : NSObject <AFSpeechTestRequestOptionsMutating> {
    AFSpeechTestRequestOptions *_base;
    NSArray *_jitContext;
    NSString *_overrideModelPath;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasJitContext : 1; unsigned char hasOverrideModelPath : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (id)getJitContext;
- (id)getOverrideModelPath;
- (id)initWithBase:(id)a0;
- (void)setJitContext:(id)a0;
- (void)setOverrideModelPath:(id)a0;

@end
