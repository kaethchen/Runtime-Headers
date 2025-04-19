@class NSString, SCDAGoodnessScoreOverrideState;

@interface _SCDAGoodnessScoreOverrideStateMutation : NSObject <SCDAGoodnessScoreOverrideStateMutating> {
    SCDAGoodnessScoreOverrideState *_base;
    long long _overrideOption;
    NSString *_reason;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasOverrideOption : 1; unsigned char hasReason : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setReason:(id)a0;
- (BOOL)isDirty;
- (long long)getOverrideOption;
- (id)getReason;
- (id)initWithBase:(id)a0;
- (void)setOverrideOption:(long long)a0;

@end
