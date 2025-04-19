@class HMMTRFabric, NSNumber;
@protocol HMMTRDeviceControllerStorageDataSource;

@interface HMMTRControllerData : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<HMMTRDeviceControllerStorageDataSource> _privateDataSource;
}

@property (weak, nonatomic) HMMTRFabric *fabric;
@property (retain, nonatomic) NSNumber *nodeID;
@property (retain, nonatomic) id<HMMTRDeviceControllerStorageDataSource> privateDataSource;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)initWithFabric:(id)a0;
- (id)privateDataSource;

@end
