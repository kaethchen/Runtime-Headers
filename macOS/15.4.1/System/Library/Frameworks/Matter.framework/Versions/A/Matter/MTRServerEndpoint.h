@class MTRDeviceController, NSSet, NSArray, NSMutableSet, NSNumber, NSMutableArray;

@interface MTRServerEndpoint : NSObject {
    NSMutableSet *_accessGrants;
    NSMutableArray *_serverClusters;
    MTRDeviceController *_deviceController;
    struct unique_ptr<EmberAfCluster[], std::default_delete<EmberAfCluster[]>> { struct __compressed_pair<EmberAfCluster *, std::default_delete<EmberAfCluster[]>> { struct EmberAfCluster *__value_; } __ptr_; } _matterClusterMetadata;
    struct { struct EmberAfCluster *cluster; unsigned char clusterCount; unsigned short endpointSize; } _matterEndpointMetadata;
    struct unique_ptr<chip::app::DataModel::DeviceTypeEntry[], std::default_delete<chip::app::DataModel::DeviceTypeEntry[]>> { struct __compressed_pair<chip::app::DataModel::DeviceTypeEntry *, std::default_delete<chip::app::DataModel::DeviceTypeEntry[]>> { struct DeviceTypeEntry *__value_; } __ptr_; } _matterDeviceTypes;
    struct unique_ptr<unsigned int[], std::default_delete<unsigned int[]>> { struct __compressed_pair<unsigned int *, std::default_delete<unsigned int[]>> { unsigned int *__value_; } __ptr_; } _matterDataVersions;
    struct optional<unsigned short> { union { char __null_state_; unsigned short __val_; } ; BOOL __engaged_; } _endpointIndex;
}

@property (readonly, nonatomic) NSSet *matterAccessGrants;
@property (readonly, copy, nonatomic) NSNumber *endpointID;
@property (readonly, copy, nonatomic) NSArray *deviceTypes;
@property (readonly, copy, nonatomic) NSArray *accessGrants;
@property (readonly, copy, nonatomic) NSArray *serverClusters;

+ (id)rootNodeEndpoint;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (id)initWithEndpointID:(id)a0 deviceTypes:(id)a1;
- (void)addAccessGrant:(id)a0;
- (BOOL)addServerCluster:(id)a0;
- (BOOL)associateWithController:(id)a0;
- (id)matterAccessGrantsForCluster:(id)a0;
- (void)registerMatterEndpoint;
- (void)removeAccessGrant:(id)a0;
- (void)unregisterMatterEndpoint;

@end
