@class OS_remote_device_browser, NSMutableOrderedSet;
@protocol SiriUIRemoteDeviceBrowserDelegate;

@interface SiriUIRemoteDeviceBrowser : NSObject

@property (retain, nonatomic) OS_remote_device_browser *deviceBrowser;
@property (retain, nonatomic) NSMutableOrderedSet *connectedRemoteDarwinIdentifiers;
@property (weak, nonatomic) id<SiriUIRemoteDeviceBrowserDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_deviceIdentifierForRemoteDevice:(id)a0;
- (void)_observeDeviceConnectionForDevice:(id)a0;
- (void)_setupDeviceBrowserForDeviceType:(unsigned int)a0;
- (BOOL)deviceWithUUIDSupportsCompactTrigger:(id)a0;
- (id)initBrowserForRemoteDeviceType:(unsigned int)a0 delegate:(id)a1;

@end
