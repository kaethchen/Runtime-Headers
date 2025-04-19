@class AVCaptureDeviceDiscoverySession, NSSet, AVCaptureDeviceInput, AVCaptureSession, NSMutableSet, AVCaptureDevice, NSMapTable;

@interface AVCaptureDeviceSelectionController : NSObject {
    NSMutableSet *_ownedDeviceInputs;
    NSMutableSet *_inUseDevices;
    NSMutableSet *_disconnectedDeviceUniqueIDs;
    AVCaptureDevice *_videoDevice;
    AVCaptureDevice *_audioDevice;
    NSMapTable *_videoDevicesWithErrors;
    NSMapTable *_audioDevicesWithErrors;
}

@property (copy, nonatomic) NSSet *availableVideoDevices;
@property (copy, nonatomic) NSSet *availableAudioDevices;
@property (retain, nonatomic) AVCaptureDeviceInput *videoInput;
@property (retain, nonatomic) AVCaptureDeviceInput *audioInput;
@property (retain, nonatomic) AVCaptureDeviceDiscoverySession *deviceDiscoverySession;
@property (readonly, nonatomic) AVCaptureSession *captureSession;
@property (retain, nonatomic) AVCaptureDevice *videoDevice;
@property (retain, nonatomic) AVCaptureDevice *audioDevice;
@property (readonly, nonatomic) BOOL hasDevicesWithErrors;

+ (id)_connectionForDeviceInput:(id)a0 output:(id)a1 mediaType:(id)a2;
+ (BOOL)automaticallyNotifiesObserversOfAudioDevice;
+ (BOOL)automaticallyNotifiesObserversOfVideoDevice;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_refreshDevices;
- (void)_clearErrorForDevice:(id)a0 mediaType:(id)a1;
- (id)errorForDevice:(id)a0;
- (void)_addAudioDevice:(id)a0;
- (BOOL)_addDevice:(id)a0 forMediaType:(id)a1 excludingMediaType:(id)a2 error:(id *)a3;
- (void)_addVideoDevice:(id)a0;
- (id)_addedDevicesWithConnectionsForMediaType:(id)a0;
- (BOOL)_attemptToReAddDevice:(id)a0 error:(id *)a1;
- (id)_audioDevices;
- (void)_devicesDidChange:(id)a0;
- (void)_handleError:(id)a0 forDevice:(id)a1 mediaType:(id)a2;
- (void)_removeAudioDevice:(id)a0;
- (void)_removeDevice:(id)a0 forMediaType:(id)a1 excludingMediaType:(id)a2;
- (void)_removeVideoDevice:(id)a0;
- (id)_videoDevices;
- (void)addDeviceInputToOwnedInputs:(id)a0;
- (id)initWithCaptureSession:(id)a0;

@end
