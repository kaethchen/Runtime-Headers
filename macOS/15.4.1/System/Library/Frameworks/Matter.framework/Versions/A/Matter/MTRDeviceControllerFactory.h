@class MTRDeviceController_Concrete, NSArray, MTRServerEndpoint, MTRDiagnosticLogsDownloader, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MTROTAProviderDelegate;

@interface MTRDeviceControllerFactory : NSObject {
    NSObject<OS_dispatch_queue> *_chipWorkQueue;
    struct DeviceControllerFactory { unsigned short x0; struct DeviceControllerSystemState *x1; struct PersistentStorageDelegate *x2; struct OperationalKeystore *x3; struct OperationalCertificateStore *x4; struct CertificateValidityPolicy *x5; struct SessionResumptionStorage *x6; BOOL x7; } *_controllerFactory;
    struct IgnoreCertificateValidityPeriodPolicy { void /* function */ **_vptr$CertificateValidityPolicy; } _certificateValidityPolicy;
    struct RawKeySessionKeystore { void /* function */ **_vptr$SessionKeystore; } _sessionKeystore;
    struct MTRApplicationCallback { void /* function */ **_vptr$ApplicationCallback; } _applicationCallback;
    struct TestPersistentStorageDelegate { void /* function */ **_vptr$PersistentStorageDelegate; struct map<std::string, std::vector<unsigned char>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<unsigned char>>>> { struct __tree<std::__value_type<std::string, std::vector<unsigned char>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned char>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<unsigned char>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<unsigned char>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<unsigned char>>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } mStorage; struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::less<std::string>> { unsigned long long __value_; } __pair3_; } __tree_; } mPoisonKeys; BOOL mRejectWrites; unsigned int mLoggingLevel; } _groupStorageDelegate;
    struct GroupDataProviderImpl { void /* function */ **_vptr$GroupDataProvider; unsigned short mMaxGroupsPerFabric; unsigned short mMaxGroupKeysPerFabric; struct GroupListener *mListener; struct PersistentStorageDelegate *mStorage; struct SessionKeystore *mSessionKeystore; struct ObjectPool<chip::Credentials::GroupDataProviderImpl::GroupInfoIteratorImpl, 2UL, chip::ObjectPoolMem::kHeap> { unsigned long long mAllocated; unsigned long long mHighWaterMark; struct HeapObjectList { void *mObject; struct HeapObjectListNode *mNext; struct HeapObjectListNode *mPrev; unsigned long long mIterationDepth; BOOL mHaveDeferredNodeRemovals; } mObjects; } mGroupInfoIterators; struct ObjectPool<chip::Credentials::GroupDataProviderImpl::GroupKeyIteratorImpl, 2UL, chip::ObjectPoolMem::kHeap> { unsigned long long mAllocated; unsigned long long mHighWaterMark; struct HeapObjectList { void *mObject; struct HeapObjectListNode *mNext; struct HeapObjectListNode *mPrev; unsigned long long mIterationDepth; BOOL mHaveDeferredNodeRemovals; } mObjects; } mGroupKeyIterators; struct ObjectPool<chip::Credentials::GroupDataProviderImpl::EndpointIteratorImpl, 2UL, chip::ObjectPoolMem::kHeap> { unsigned long long mAllocated; unsigned long long mHighWaterMark; struct HeapObjectList { void *mObject; struct HeapObjectListNode *mNext; struct HeapObjectListNode *mPrev; unsigned long long mIterationDepth; BOOL mHaveDeferredNodeRemovals; } mObjects; } mEndpointIterators; struct ObjectPool<chip::Credentials::GroupDataProviderImpl::KeySetIteratorImpl, 2UL, chip::ObjectPoolMem::kHeap> { unsigned long long mAllocated; unsigned long long mHighWaterMark; struct HeapObjectList { void *mObject; struct HeapObjectListNode *mNext; struct HeapObjectListNode *mPrev; unsigned long long mIterationDepth; BOOL mHaveDeferredNodeRemovals; } mObjects; } mKeySetIterators; struct ObjectPool<chip::Credentials::GroupDataProviderImpl::GroupSessionIteratorImpl, 2UL, chip::ObjectPoolMem::kHeap> { unsigned long long mAllocated; unsigned long long mHighWaterMark; struct HeapObjectList { void *mObject; struct HeapObjectListNode *mNext; struct HeapObjectListNode *mPrev; unsigned long long mIterationDepth; BOOL mHaveDeferredNodeRemovals; } mObjects; } mGroupSessionsIterator; struct ObjectPool<chip::Credentials::GroupDataProviderImpl::GroupKeyContext, 2UL, chip::ObjectPoolMem::kHeap> { unsigned long long mAllocated; unsigned long long mHighWaterMark; struct HeapObjectList { void *mObject; struct HeapObjectListNode *mNext; struct HeapObjectListNode *mPrev; unsigned long long mIterationDepth; BOOL mHaveDeferredNodeRemovals; } mObjects; } mGroupKeyContexPool; } _groupDataProvider;
    BOOL _usingPerControllerStorage;
    struct PersistentStorageDelegate { void /* function */ **x0; } *_persistentStorageDelegate;
    struct MTRSessionResumptionStorageBridge { void /* function */ **x0; id x1; } *_sessionResumptionStorage;
    struct PersistentStorageOperationalKeystore { void /* function */ **x0; struct PersistentStorageDelegate *x1; unsigned char x2; struct P256Keypair *x3; BOOL x4; BOOL x5; } *_keystore;
    void *_opCertStore;
    struct unique_ptr<MTROperationalBrowser, std::default_delete<MTROperationalBrowser>> { struct __compressed_pair<MTROperationalBrowser *, std::default_delete<MTROperationalBrowser>> { struct MTROperationalBrowser *__value_; } __ptr_; } _operationalBrowser;
    NSArray *_productAttestationAuthorityCertificates;
    NSArray *_certificationDeclarationCertificates;
    BOOL _advertiseOperational;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _controllersLock;
    NSMutableArray *_controllers;
    MTRDeviceController_Concrete *_controllerBeingStarted;
    MTRDeviceController_Concrete *_controllerBeingShutDown;
    unsigned char _nextAvailableFabricIndex;
    id<MTROTAProviderDelegate> _otaProviderDelegate;
    NSObject<OS_dispatch_queue> *_otaProviderDelegateQueue;
    MTRServerEndpoint *_otaProviderEndpoint;
    struct unique_ptr<MTROTAProviderDelegateBridge, std::default_delete<MTROTAProviderDelegateBridge>> { struct __compressed_pair<MTROTAProviderDelegateBridge *, std::default_delete<MTROTAProviderDelegateBridge>> { struct MTROTAProviderDelegateBridge *__value_; } __ptr_; } _otaProviderDelegateBridge;
    MTRDiagnosticLogsDownloader *_diagnosticLogsDownloader;
    NSMutableArray *_serverEndpoints;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serverEndpointsLock;
    struct final { void /* function */ **_vptr$BleScannerDelegate; } _preWarmingDelegate;
}

@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NSArray *knownFabrics;

+ (void)initialize;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)accessGrantsForFabricIndex:(unsigned char)a0 clusterPath:(id)a1;
- (id)createControllerOnExistingFabric:(id)a0 error:(id *)a1;
- (id)createControllerOnNewFabric:(id)a0 error:(id *)a1;
- (id)neededReadPrivilegeForClusterID:(id)a0 attributeID:(id)a1;
- (void)preWarmCommissioningSession;
- (BOOL)startControllerFactory:(id)a0 error:(id *)a1;
- (void)stopControllerFactory;

@end
