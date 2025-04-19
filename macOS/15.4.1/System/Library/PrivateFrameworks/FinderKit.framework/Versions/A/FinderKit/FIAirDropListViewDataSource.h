@class NSString, CNContactStore;

@interface FIAirDropListViewDataSource : FI_TTableViewDataSource <TCoalescingNodeObserverProtocol> {
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    CNContactStore *_contactStore;
    int _animatingRefresh;
}

@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } hoveringOver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)prepareContent;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)aboutToTearDown;
- (void)refresh;
- (void)initCommon;
- (void)awakeCommon;
- (void)coalescingNodeObserver:(void *)a0 nodesAdded:(const void *)a1 toObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesChanged:(const void *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesDeleted:(const void *)a1 fromObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 openChildListUpdated:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)coalescingNodeObserver:(void *)a0 openSyncCompleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (id)listViewItemForPersonNode:(struct TFENode { struct OpaqueNodeRef *x0; })a0;

@end
