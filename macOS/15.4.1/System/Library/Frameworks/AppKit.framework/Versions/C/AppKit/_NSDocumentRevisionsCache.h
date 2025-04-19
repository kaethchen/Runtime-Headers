@class NSCountedSet, NSMapTable, NSMutableOrderedSet, NSDocumentRevisionsController;

@interface _NSDocumentRevisionsCache : NSObject {
    NSDocumentRevisionsController *controller;
    NSMapTable *_costs;
    NSCountedSet *pinnedRevisions;
    NSMutableOrderedSet *unpinnedRevisions;
    id vmPressureSourceID;
}

@property (getter=isEvictionEnabled) BOOL evictionEnabled;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeRevision:(id)a0;
- (void)_insertUnpinnedRevision:(id)a0;
- (BOOL)acquireRevision:(id)a0;
- (void)addRevision:(id)a0 cost:(unsigned long long)a1;
- (BOOL)containsRevision:(id)a0;
- (id)initWithRevisionsController:(id)a0;
- (void)relinquishRevision:(id)a0;
- (void)updateCost:(unsigned long long)a0 forRevision:(id)a1;

@end
