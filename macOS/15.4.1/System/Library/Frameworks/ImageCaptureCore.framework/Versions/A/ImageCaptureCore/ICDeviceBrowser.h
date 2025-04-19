@class NSArray, NSString, ICDevice, NSMutableArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject

@property (getter=isBrowsing) BOOL browsing;
@property (retain) NSMutableArray *internalDevices;
@property unsigned long long internalBrowsedDeviceTypeMask;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } devicesLock;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property id<ICDeviceBrowserDelegate> delegate;
@property unsigned long long browsedDeviceTypeMask;
@property (readonly) NSArray *devices;
@property (readonly, nonatomic) ICDevice *preferredDevice;
@property (readonly, copy, nonatomic) NSString *contentsAuthorizationStatus;
@property (readonly, copy, nonatomic) NSString *controlAuthorizationStatus;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (BOOL)containsDevice:(id)a0;
- (void)addDevice:(id)a0 moreComing:(BOOL)a1;
- (id)deviceWithRef:(id)a0;
- (void)removeDevice:(id)a0 moreGoing:(BOOL)a1;

@end
