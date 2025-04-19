@class NSArray, CATOperationQueue;
@protocol CATSharingDeviceDiscoveryDelegate, CATSharingDiscoveryPrimitives;

@interface CATSharingDeviceDiscovery : NSObject {
    id<CATSharingDiscoveryPrimitives> mDiscoveryPrimitives;
    id<CATSharingDeviceDiscoveryDelegate> mDelegate;
    CATOperationQueue *mDelegationQueue;
}

@property (nonatomic) BOOL invalidated;
@property (copy, nonatomic) NSArray *nearbyDevices;

- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)deviceFound:(id)a0;
- (void)deviceLost:(id)a0;
- (void)_invalidateWithError:(id)a0;
- (void)addPrimitiveHandlers;
- (id)initWithDiscoveryPrimitives:(id)a0 delegate:(id)a1 delegateOperationQueue:(id)a2;
- (id)pairingTerminalForDevice:(id)a0;
- (void)removePrimitiveHandlers;

@end
