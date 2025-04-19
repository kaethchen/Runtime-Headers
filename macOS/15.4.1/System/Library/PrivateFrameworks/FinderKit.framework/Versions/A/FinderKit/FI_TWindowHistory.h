@class NSString, FI_TBrowserContainerController, FI_TWindowHistoryEntry, NSMutableArray;

@interface FI_TWindowHistory : NSObject <TNodeObserverProtocol> {
    NSMutableArray *_historyList;
    struct shared_ptr<TNodeObserverCocoaBridge> { struct TNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _nodeObserver;
    struct TNSWeakPtr<FI_TBrowserContainerController> { FI_TBrowserContainerController *fWeakObject; } _weakController;
}

@property (weak, nonatomic) FI_TBrowserContainerController *controller;
@property (readonly, nonatomic) BOOL atBeginning;
@property (readonly, nonatomic) BOOL atEnd;
@property (readonly, nonatomic) FI_TWindowHistoryEntry *previous;
@property (readonly, nonatomic) FI_TWindowHistoryEntry *next;
@property (nonatomic) long long historyPosition;
@property (readonly, nonatomic) long long entryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (long long)endPosition;
- (void)removeEntry:(id)a0;
- (id)currentEntry;
- (void)addToHistory:(const void *)a0 windowState:(id)a1;
- (id)entryAtPosition:(long long)a0;
- (id)initWithBrowserContainer:(id)a0;
- (void)nodeObserver:(void *)a0 nodeChanged:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2 property:(unsigned int)a3;
- (void)nodeObserver:(void *)a0 nodeDeleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1 fromObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)nodeObserver:(void *)a0 nodeMoved:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)removeNodeFromHistory:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)startObservingNodes:(const void *)a0;
- (void)stopObservingNodes:(const void *)a0;
- (void)updateCurrentEntryWindowState:(id)a0;

@end
