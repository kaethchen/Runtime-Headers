@class AVAudioClient, AVAudioDevice, NSHashTable, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue, TUAudioDeviceControllerActions;

@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions>

@property (retain, nonatomic) AVAudioClient *audioClient;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSHashTable *delegates;
@property (weak, nonatomic) id<TUAudioDeviceControllerActions> actionsDelegate;
@property (copy, nonatomic) id /* block */ registerForMutedTalkerNotificationCallback;
@property (retain, nonatomic) AVAudioDevice *currentInputDevice;
@property (retain, nonatomic) AVAudioDevice *currentOutputDevice;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *inputDevices;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) BOOL isFollowingSystemInputSetting;
@property (readonly, nonatomic) BOOL isFollowingSystemOutputSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prewarm;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)initWithActionsDelegate:(id)a0 serialQueue:(id)a1;
- (void)notifyDelegatesOfDeviceListChange;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)a0;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)a0;
- (void)setFollowsSystemInputSetting:(BOOL)a0;
- (void)setFollowsSystemOutputSetting:(BOOL)a0;
- (void)setMediaPlaybackOnExternalDevice:(BOOL)a0;
- (void)setMixesVoiceWithMedia:(BOOL)a0;

@end
