@class NSString, NSMutableArray;
@protocol AXEHIDDeviceManagerDelegate;

@interface AXEHIDDeviceManager : NSObject <AXEHIDDeviceDetectorDelegate, AXEHIDDeviceDelegate>

@property (class, readonly, nonatomic) AXEHIDDeviceManager *shared;

@property (retain, nonatomic) NSMutableArray *_devices;
@property (weak, nonatomic) id<AXEHIDDeviceManagerDelegate> delegate;
@property (nonatomic) BOOL detectDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
