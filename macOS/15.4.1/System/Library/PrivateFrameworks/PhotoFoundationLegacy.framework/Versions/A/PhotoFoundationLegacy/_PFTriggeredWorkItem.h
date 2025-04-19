@class NSMutableArray;

@interface _PFTriggeredWorkItem : PFInitializationClassWorkItem {
    NSMutableArray *_triggeredWorkItems;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _triggeredWorkItemsLock;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)addTriggeredWorkItem:(id)a0;
- (void)doAllWorkItems;
- (void)doOneWorkItem;
- (void)performInitialization;
- (BOOL)runsWorkItemsConcurrently;
- (void)triggerWorkItems;

@end
