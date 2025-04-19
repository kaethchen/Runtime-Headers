@class NSMutableArray, NSArray, NSObject, MTRDeviceController;
@protocol OS_dispatch_queue, MTRDeviceControllerStorageDelegate;

@interface MTRDeviceControllerDataStore : NSObject {
    id<MTRDeviceControllerStorageDelegate> _storageDelegate;
    NSObject<OS_dispatch_queue> *_storageDelegateQueue;
    MTRDeviceController *_controller;
    NSMutableArray *_nodesWithResumptionInfo;
    NSMutableArray *_nodesWithAttributeInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _nodeArrayLock;
}

@property (readonly, nonatomic) NSArray *nodesWithStoredData;

- (void).cxx_destruct;
- (BOOL)_bulkStoreAttributeCacheValues:(id)a0;
- (id)_fetchNodeIndex;
- (void)_clearResumptionInfoForNodeID:(id)a0 controller:(id)a1;
- (void)_clearStoredClusterDataForNodeID:(id)a0;
- (id)_clusterDataKeyForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
- (id)_clusterIndexKeyForNodeID:(id)a0 endpointID:(id)a1;
- (BOOL)_deleteClusterDataForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
- (BOOL)_deleteClusterIndexForNodeID:(id)a0 endpointID:(id)a1;
- (BOOL)_deleteEndpointIndexForNodeID:(id)a0;
- (BOOL)_deleteNodeIndex;
- (id)_deviceDataKeyForNodeID:(id)a0;
- (id)_endpointIndexKeyForNodeID:(id)a0;
- (id)_fetchAttributeCacheValueForKey:(id)a0 expectedClass:(Class)a1;
- (id)_fetchClusterDataForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
- (id)_fetchClusterIndexForNodeID:(id)a0 endpointID:(id)a1;
- (id)_fetchEndpointIndexForNodeID:(id)a0;
- (id)_findResumptionInfoWithKey:(id)a0;
- (id)_getClusterDataFromSecureLocalValues:(id)a0;
- (void)_pruneEmptyStoredClusterDataBranches;
- (BOOL)_removeAttributeCacheValueForKey:(id)a0;
- (BOOL)_removeEndpointFromEndpointIndex:(id)a0 forNodeID:(id)a1;
- (BOOL)_storeAttributeCacheValue:(id)a0 forKey:(id)a1;
- (BOOL)_storeClusterData:(id)a0 forNodeID:(id)a1 endpointID:(id)a2 clusterID:(id)a3;
- (BOOL)_storeClusterIndex:(id)a0 forNodeID:(id)a1 endpointID:(id)a2;
- (BOOL)_storeEndpointIndex:(id)a0 forNodeID:(id)a1;
- (BOOL)_storeNodeIndex:(id)a0;
- (void)clearAllResumptionInfo;
- (void)clearAllStoredClusterData;
- (void)clearDeviceDataForNodeID:(id)a0;
- (void)clearResumptionInfoForNodeID:(id)a0;
- (void)clearStoredClusterDataForNodeID:(id)a0;
- (void)clearStoredClusterDataForNodeID:(id)a0 endpointID:(id)a1;
- (void)clearStoredClusterDataForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
- (void)fetchAttributeDataForAllDevices:(id /* block */)a0;
- (id)fetchLastLocallyUsedNOC;
- (id)findResumptionInfoByNodeID:(id)a0;
- (id)findResumptionInfoByResumptionID:(id)a0;
- (id)getStoredClusterDataForNodeID:(id)a0;
- (id)getStoredClusterDataForNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2;
- (id)getStoredDeviceDataForNodeID:(id)a0;
- (id)initWithController:(id)a0 storageDelegate:(id)a1 storageDelegateQueue:(id)a2;
- (void)removeAttributes:(id)a0 fromCluster:(id)a1 forNodeID:(id)a2;
- (void)storeClusterData:(id)a0 forNodeID:(id)a1;
- (void)storeDeviceData:(id)a0 forNodeID:(id)a1;
- (struct ChipError { unsigned int x0; char *x1; unsigned int x2; })storeLastLocallyUsedNOC:(id)a0;
- (void)storeResumptionInfo:(id)a0;
- (void)synchronouslyPerformBlock:(id /* block */)a0;

@end
