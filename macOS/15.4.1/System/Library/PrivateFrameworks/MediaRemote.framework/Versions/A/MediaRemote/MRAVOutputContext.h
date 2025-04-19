@class NSArray, NSString, MRAVOutputDevice, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVOutputContext : NSObject {
    NSArray *_outputDevices;
    NSArray *_outputDevicesSnapshot;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;

@property (retain, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *contextID;
@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) NSArray *outputDevicesSnapshot;
@property (readonly, nonatomic) NSArray *outputDeviceUIDs;
@property (readonly, nonatomic) BOOL containsLocalDevice;
@property (readonly, nonatomic) NSArray *personalDevices;
@property (readonly, nonatomic) NSArray *personalDeviceUIDs;
@property (readonly, nonatomic) unsigned int volumeControlCapabilities;
@property (readonly, nonatomic, getter=isVolumeControlAvailable) BOOL volumeControlAvailable;
@property (readonly, nonatomic) BOOL supportsVolumeControl;
@property (readonly, nonatomic) MRAVOutputDevice *predictedOutputDevice;
@property (readonly, nonatomic) NSArray *predictedOutputDeviceUIDs;
@property (nonatomic) float volume;
@property (nonatomic, getter=isVolumeMuted) BOOL volumeMuted;
@property (readonly, nonatomic) BOOL supportsMultipleBluetoothOutputDevices;

+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)iTunesContext;
+ (id)sharedAudioPresentationContext;

- (void).cxx_destruct;
- (void)resetPredictedOutputDevice;
- (void)_compareOutputDeviceList:(id)a0 withNewOutputDeviceList:(id)a1;
- (void)_notfiyOutputDeviceRemoved:(id)a0;
- (void)_notifyChangesInOutputDevicesWithAdded:(id)a0 removed:(id)a1 updated:(id)a2 previous:(id)a3 newDevices:(id)a4;
- (void)_notifyOutputDeviceAdded:(id)a0;
- (void)_notifyOutputDeviceChanged:(id)a0;
- (void)_reloadOutputDevices;
- (void)_reloadWithOutputDevices:(id)a0;
- (void)_scheduleOutputContextDeviceDidChangeNotification;
- (void)_scheduleOutputContextDevicesDidChangeNotification;
- (void)_scheduleOutputContextDidChangeNotification;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (void)addOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)addOutputDevices:(id)a0 withCallbackQueue:(id)a1 block:(id /* block */)a2;
- (void)adjustVolume:(long long)a0 details:(id)a1;
- (BOOL)containsOutputDevice:(id)a0;
- (BOOL)containsOutputDeviceUID:(id)a0;
- (void)modifyTopologyWithRequest:(id)a0 withReplyQueue:(id)a1 completion:(id /* block */)a2;
- (id)outputDeviceForUID:(id)a0;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)a0 block:(id /* block */)a1;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 fadeAudio:(BOOL)a2 withCallbackQueue:(id)a3 block:(id /* block */)a4;
- (void)removeOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)removeOutputDevices:(id)a0 withCallbackQueue:(id)a1 block:(id /* block */)a2;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 password:(id)a2 fadeAudio:(BOOL)a3 withCallbackQueue:(id)a4 block:(id /* block */)a5;
- (void)setOutputDevices:(id)a0 initiator:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setOutputDevices:(id)a0 withCallbackQueue:(id)a1 block:(id /* block */)a2;
- (void)setOutputDevices:(id)a0 withPassword:(id)a1 withCallbackQueue:(id)a2 block:(id /* block */)a3;
- (void)setVolume:(float)a0 details:(id)a1;
- (void)setVolumeMuted:(BOOL)a0 details:(id)a1;
- (BOOL)shouldLog;

@end
