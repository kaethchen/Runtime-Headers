@class NSString, FPItemCollection, FINode, NSError;

@interface DSFPItemStatusObserver : NSObject <FPItemCollectionItemIDBasedDelegate> {
    struct TNodePtr { FINode *fFINode; } _parentNode;
    struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } _parentIdentifier;
    FPItemCollection *_collection;
    NSError *_FPError;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _observingLock;
    BOOL _createdFromURL;
}

@property (readonly, nonatomic, getter=isPopulated) BOOL populated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)stopObserving;
- (id)fpItems;
- (id)fpError;
- (void)collection:(id)a0 didEncounterError:(id)a1;
- (void)collection:(id)a0 didUpdateItems:(id)a1 replaceItemsByFormerID:(id)a2 deleteItemsWithIDs:(id)a3;
- (void)collection:(id)a0 didUpdateObservedItem:(id)a1;
- (void)collectionDidFinishGathering:(id)a0;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)resetError;
- (void)startObserving:(id)a0 forParent:(const struct TNodePtr { id x0; } *)a1 withQueue:(id)a2;
- (void)updateFPItems:(id)a0;
- (void)updateNodesFPItemsFromCollection:(const void *)a0;

@end
