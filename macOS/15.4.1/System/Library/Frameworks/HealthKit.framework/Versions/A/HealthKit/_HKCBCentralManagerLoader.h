@class CBCentralManager, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _HKCBCentralManagerLoader : NSObject <CBCentralManagerDelegate> {
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
