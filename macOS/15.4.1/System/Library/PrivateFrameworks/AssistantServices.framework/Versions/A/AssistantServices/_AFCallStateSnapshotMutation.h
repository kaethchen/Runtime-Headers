@class NSString, AFCallStateSnapshot;

@interface _AFCallStateSnapshotMutation : NSObject <AFCallStateSnapshotMutating> {
    AFCallStateSnapshot *_base;
    unsigned long long _callState;
    BOOL _onSpeaker;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasCallState : 1; unsigned char hasOnSpeaker : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (void)setCallState:(unsigned long long)a0;
- (unsigned long long)getCallState;
- (BOOL)getOnSpeaker;
- (id)initWithBase:(id)a0;
- (void)setOnSpeaker:(BOOL)a0;

@end
