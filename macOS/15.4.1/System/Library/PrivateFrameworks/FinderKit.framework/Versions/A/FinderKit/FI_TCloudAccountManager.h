@class NSString, FI_TRunAfterHelper;

@interface FI_TCloudAccountManager : NSObject <TCoalescingNodeObserverProtocol> {
    struct TriStateBool { unsigned char fState; } fLoggedIntoICloud;
    struct TriStateBool { unsigned char fState; } fICloudDriveEnabled;
    struct TriStateBool { unsigned char fState; } fICloudSynchingDesktop;
    struct TriStateBool { unsigned char fState; } fICloudSynchingDocuments;
    struct unordered_map<unsigned long, NSString *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSString *>>> { struct __hash_table<std::__hash_value_type<unsigned long, NSString *>, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSString *>, std::hash<unsigned long>, std::equal_to<unsigned long>>, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSString *>, std::equal_to<unsigned long>, std::hash<unsigned long>>, std::allocator<std::__hash_value_type<unsigned long, NSString *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSString *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSString *>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSString *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSString *>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long, NSString *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long, NSString *>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long, std::__hash_value_type<unsigned long, NSString *>, std::hash<unsigned long>, std::equal_to<unsigned long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long, std::__hash_value_type<unsigned long, NSString *>, std::equal_to<unsigned long>, std::hash<unsigned long>>> { float __value_; } __p3_; } __table_; } _currentDetachedNodeDomains;
    struct optional<std::pair<bool, bool>> { union { char __null_state_; struct pair<bool, bool> { BOOL first; BOOL second; } __val_; } ; BOOL __engaged_; } fFPFSMigrationExpectedState;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _providersContainer;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _desktopInHome;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _documentsInHome;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _homeObserver;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _providersObserver;
    struct TNSWeakPtr<FI_TRunAfterHelper> { FI_TRunAfterHelper *fWeakObject; } _dataSeparatedRetryToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singleton;
+ (struct optional<std::pair<bool, bool>> { union { char x0; struct pair<bool, bool> { BOOL x0; BOOL x1; } x1; } x0; BOOL x1; })migrationState;
+ (id)desktopDomainID;
+ (void)checkForFileProviderChanges;
+ (BOOL)desktopIsInICloud;
+ (id)documentsDomainID;
+ (BOOL)documentsIsInICloud;
+ (BOOL)iCloudAccountManagementAvailable;
+ (BOOL)isMainICloudDriveEnabled;
+ (void)postOverQuotaChange;
+ (void)postStatusChange;
+ (struct vector<std::pair<unsigned long, NSString *>, std::allocator<std::pair<unsigned long, NSString *>>> { void *x0; void *x1; struct __compressed_pair<std::pair<unsigned long, NSString *> *, std::allocator<std::pair<unsigned long, NSString *>>> { void *x0; } x2; })readDetachedDomainsStateFromDisk;
+ (BOOL)shouldDisambiguateDesktopAndDocuments;
+ (BOOL)showICloudDriveContent;
+ (BOOL)signedInICloud;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (id)_init;
- (struct optional<std::pair<bool, bool>> { union { char x0; struct pair<bool, bool> { BOOL x0; BOOL x1; } x1; } x0; BOOL x1; })migrationState;
- (BOOL)desktopInICloud;
- (id)cachedDetachedDomainIDForFolder:(unsigned long long)a0 computeIfMissing:(BOOL)a1;
- (void)coalescingNodeObserver:(void *)a0 nodesAdded:(const void *)a1 toObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesChanged:(const void *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesDeleted:(const void *)a1 fromObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 openSyncCompleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)computeLoginState;
- (void)dataSeparatedAccountAdded:(id)a0;
- (void)dataSeparatedAccountAdded:(id)a0 retry:(int)a1;
- (void)dataSeparatedAccountRemoved;
- (BOOL)documentsInICloud;
- (void)iCloudAccountAvailabilityChanged;
- (BOOL)isMainICloudDriveEnabled;
- (BOOL)isSignedIntoICloud;
- (void)postFPProviderChange;
- (void)providerAdded:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)providerRemoved:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (struct pair<bool, bool> { BOOL x0; BOOL x1; })updateLoginState:(const void *)a0;

@end
