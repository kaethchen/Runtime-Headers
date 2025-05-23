@class NSArray, NSPointerArray, NSObject;
@protocol OS_dispatch_queue;

@interface MRExternalDeviceManager : NSObject {
    NSPointerArray *_devicesPointerArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) NSArray *allDevices;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)deviceWithIdentifier:(id)a0;
- (void)clearDevices;
- (void)registerDevice:(id)a0;

@end
