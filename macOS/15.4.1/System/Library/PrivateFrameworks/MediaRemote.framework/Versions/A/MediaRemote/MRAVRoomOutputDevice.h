@class MRAVConcreteOutputDevice, NSArray, MRAVOutputDevice, NSString;

@interface MRAVRoomOutputDevice : MRAVOutputDevice {
    NSArray *_clusterComposition;
    NSString *_uid;
}

@property (readonly, nonatomic) MRAVOutputDevice *outputDevice;
@property (readonly, nonatomic) MRAVConcreteOutputDevice *concreteOutputDevice;
@property (readonly, nonatomic) MRAVOutputDevice *roomMemberOutputDevice;
@property (readonly, nonatomic) NSArray *roomMemberOutputDevices;
@property (readonly, nonatomic) NSString *label;

+ (id)calculateOutputDeviceIDFromOutputDeviceID:(id)a0 withRoomID:(id)a1;

- (id)name;
- (void).cxx_destruct;
- (id)uid;
- (id)localizedName;
- (unsigned int)deviceType;
- (float)volume;
- (id)debugName;
- (unsigned int)deviceSubtype;
- (id)modelID;
- (unsigned int)clusterType;
- (id)primaryID;
- (id)roomName;
- (void)adjustVolume:(long long)a0 details:(id)a1;
- (id)clusterComposition;
- (BOOL)containsUID:(id)a0;
- (id)initWithOutputDevice:(id)a0 memberOutputDevices:(id)a1;
- (BOOL)isPickable;
- (BOOL)isVolumeMuted;
- (id)parentUID;
- (id)roomID;
- (void)setVolume:(float)a0 details:(id)a1;
- (void)setVolumeMuted:(BOOL)a0 details:(id)a1;
- (unsigned int)volumeCapabilities;

@end
