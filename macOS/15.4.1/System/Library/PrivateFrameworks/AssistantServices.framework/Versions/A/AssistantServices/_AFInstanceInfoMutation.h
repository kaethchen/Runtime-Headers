@class NSString, AFInstanceInfo, NSUUID;

@interface _AFInstanceInfoMutation : NSObject <AFInstanceInfoMutating> {
    AFInstanceInfo *_base;
    NSUUID *_instanceUUID;
    long long _applicationType;
    NSUUID *_applicationUUID;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasInstanceUUID : 1; unsigned char hasApplicationType : 1; unsigned char hasApplicationUUID : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (id)getInstanceUUID;
- (long long)getApplicationType;
- (id)getApplicationUUID;
- (id)initWithBase:(id)a0;
- (void)setApplicationType:(long long)a0;
- (void)setApplicationUUID:(id)a0;
- (void)setInstanceUUID:(id)a0;

@end
