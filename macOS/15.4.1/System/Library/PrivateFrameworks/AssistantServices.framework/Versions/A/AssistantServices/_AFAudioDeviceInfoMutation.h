@class NSString, AFAudioDeviceInfo, NSUUID;

@interface _AFAudioDeviceInfoMutation : NSObject <AFAudioDeviceInfoMutating> {
    AFAudioDeviceInfo *_base;
    NSString *_route;
    BOOL _isRemoteDevice;
    NSUUID *_deviceUID;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasRoute : 1; unsigned char hasIsRemoteDevice : 1; unsigned char hasDeviceUID : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setDeviceUID:(id)a0;
- (BOOL)isDirty;
- (void)setRoute:(id)a0;
- (id)getRoute;
- (id)getDeviceUID;
- (BOOL)getIsRemoteDevice;
- (id)initWithBase:(id)a0;
- (void)setIsRemoteDevice:(BOOL)a0;

@end
