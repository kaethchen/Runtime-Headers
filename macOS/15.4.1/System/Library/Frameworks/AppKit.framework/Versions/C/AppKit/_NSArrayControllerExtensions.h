@class NSArray, NSArrayController, NSPredicate;

@interface _NSArrayControllerExtensions : NSObject {
    NSArrayController *_controller;
    NSArray *_automaticRearrangementKeyPaths;
    NSArray *_sortDescriptors;
    NSPredicate *_filterPredicate;
    id _suppressedContentObjectsObservingTracker;
}

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_automaticRearrangementKeyPaths;
- (id)_filterPredicate;
- (id)_setAutomaticRearrangementKeyPaths:(id)a0;
- (id)_setFilterPredicate:(id)a0;
- (void)_setFilterPredicateNoCopy:(id)a0;
- (id)_setSortDescriptors:(id)a0;
- (void)_setSortDescriptorsNoCopy:(id)a0;
- (id)_sortDescriptors;
- (void)_startRearrangementObservingForSuppressedContentObjects:(id)a0;
- (void)_stopRearrangementObservingForSuppressedContentObjects;
- (id)initWithController:(id)a0;

@end
