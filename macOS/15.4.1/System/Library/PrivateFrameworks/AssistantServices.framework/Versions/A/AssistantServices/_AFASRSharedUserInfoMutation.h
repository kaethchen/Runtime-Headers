@class NSString, AFASRSharedUserInfo;

@interface _AFASRSharedUserInfoMutation : NSObject <AFASRSharedUserInfoMutating> {
    AFASRSharedUserInfo *_base;
    NSString *_sharedUserId;
    NSString *_loggableSharedUserId;
    NSString *_personaId;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasSharedUserId : 1; unsigned char hasLoggableSharedUserId : 1; unsigned char hasPersonaId : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (void)setLoggableSharedUserId:(id)a0;
- (void)setPersonaId:(id)a0;
- (void)setSharedUserId:(id)a0;
- (id)getSharedUserId;
- (id)getLoggableSharedUserId;
- (id)getPersonaId;
- (id)initWithBase:(id)a0;

@end
