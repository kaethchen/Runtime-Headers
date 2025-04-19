@class NSLock, NSArray, AXSSAudioInputDevice, NSMutableArray, NSObject, AXSSSpeechSynthesisController, AXSSAudioOutputDevice;
@protocol OS_dispatch_queue, AXSSAudioDeviceManagerDelegate;

@interface AXSSAudioDeviceManager : NSObject

@property (class, readonly, nonatomic) AXSSAudioDeviceManager *sharedAudioDeviceManager;

@property (retain, nonatomic) NSMutableArray *outputDevices;
@property (retain, nonatomic) NSMutableArray *inputDevices;
@property (retain, nonatomic) AXSSAudioOutputDevice *audioOutputDeviceAggregate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *listenerQueue;
@property (nonatomic) id /* block */ hardwareListener;
@property (retain, nonatomic) NSLock *changeLock;
@property (nonatomic) long long changeMask;
@property (readonly, nonatomic) NSArray *allDevices;
@property (retain, nonatomic) AXSSAudioOutputDevice *defaultOutputDevice;
@property (retain, nonatomic) AXSSAudioInputDevice *defaultInputDevice;
@property (readonly, nonatomic) AXSSAudioInputDevice *accessibilityInputDevice;
@property (readonly, nonatomic) AXSSAudioInputDevice *builtInMicrophone;
@property (weak, nonatomic) AXSSSpeechSynthesisController<AXSSAudioDeviceManagerDelegate> *delegate;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)_accessibilityInputDeviceID;
- (id)_aggregateAudioDeviceSubdevicesWithConsumerUID:(id)a0;
- (BOOL)_aggregateAudioOutputDevice:(unsigned int)a0 setSubdevices:(id)a1;
- (id)accessiblityTypeToSpeakOutputDeviceName;
- (BOOL)anyInputDeviceAvailable;
- (id)createAggregateOutputDeviceWithConsumerUID:(id)a0 usingName:(id)a1 usingUID:(id)a2;
- (void)createAudioOutputDeviceAggregate;
- (void)destroyAudioOutputDeviceAggregate;
- (id)deviceForCategory:(unsigned int)a0;
- (id)deviceWithDeviceID:(unsigned int)a0;
- (id)deviceWithDeviceUID:(id)a0;
- (id)inputDeviceWithDeviceID:(unsigned int)a0;
- (void)notifyServiceChange;
- (id)outputDeviceWithDeviceID:(unsigned int)a0;
- (id)outputDeviceWithDeviceUID:(id)a0;
- (id)prepareAggregateOutputDeviceWithConsumerUID:(id)a0;
- (void)prepareAudioOutputDeviceAggregate;
- (void)removeAggregateOutputDeviceWithDeviceUID:(id)a0;
- (void)rescanAudioDevices;
- (void)serviceChangeMask:(id)a0;
- (void)setDevice:(id)a0 forCategory:(unsigned int)a1;

@end
