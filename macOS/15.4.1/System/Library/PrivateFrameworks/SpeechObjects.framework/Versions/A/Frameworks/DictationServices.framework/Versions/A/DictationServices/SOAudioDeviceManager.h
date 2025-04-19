@class NSMutableArray;

@interface SOAudioDeviceManager : NSObject {
    NSMutableArray *_inputDevices;
    unsigned int _inputDev;
    struct IONotificationPort { } *_notificationPort;
    unsigned int _serviceNotification;
}

@property (class, readonly, nonatomic) BOOL isClamshellClosed;
@property (class, readonly, nonatomic) unsigned int defaultInputDeviceID;

@property (readonly, nonatomic) BOOL isClamShellModeOn;

+ (id)sharedAudioDeviceManager;

- (void)dealloc;
- (id)init;
- (id)inputSources;
- (id)inputDevices;
- (id)defaultInputDevice;
- (id)deviceForCategory:(unsigned int)a0;
- (id)inputDeviceWithDeviceID:(unsigned int)a0;
- (void)rescanAudioDevices;
- (void)setDefaultInputDevice:(id)a0;
- (void)setDevice:(id)a0 forCategory:(unsigned int)a1;
- (id)siriInputDevice;
- (id)inputDeviceWithIdentifier:(id)a0;
- (void)beginMonitoringInputDeviceWithIdentifier:(id)a0;
- (unsigned long long)indexOfDeviceForCategory:(unsigned int)a0 inArray:(id)a1;
- (void)monitorDeviceVolume:(id)a0 forInput:(BOOL)a1;
- (void)postHardwareMessage:(id)a0;
- (void)postMessage:(id)a0;
- (void)postSourceChanged:(id)a0;
- (void)syncDeviceSettings:(id)a0;

@end
