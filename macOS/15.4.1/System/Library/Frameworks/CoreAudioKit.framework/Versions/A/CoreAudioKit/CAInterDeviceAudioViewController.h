@class NSTextField, NSMutableDictionary, NSArrayController, NSMutableArray, NSCollectionView;

@interface CAInterDeviceAudioViewController : NSViewController {
    NSArrayController *arrayController;
    NSTextField *noDevicesField;
    NSCollectionView *collectionView;
    NSMutableArray *deviceList;
    NSMutableDictionary *pendingDeviceDictionary;
}

@property (readonly) struct _AMDeviceNotificationContext { } *notification;
@property (retain) NSMutableArray *deviceList;

- (void)dealloc;
- (id)init;
- (void)viewDidLoad;
- (void)removeDeviceAtIndex:(unsigned long long)a0;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (id)deviceForAMDRef:(struct _AMDevice { } *)a0;
- (unsigned long long)deviceIndexForAMDRef:(struct _AMDevice { } *)a0;
- (void)insertDevice:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertObject:(id)a0 inDeviceListAtIndex:(unsigned long long)a1;
- (void)removeDevice:(id)a0 afterDelay:(unsigned long long)a1;
- (void)removeDeviceWithAMDRef:(struct _AMDevice { } *)a0;
- (void)removeObjectFromDeviceListAtIndex:(unsigned long long)a0;
- (void)timeoutTimerFired:(id)a0;
- (void)updateDeviceUponReconnect:(id)a0 newDeviceRef:(struct _AMDevice { } *)a1;

@end
