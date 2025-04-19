@class NSArray, NSCountedSet, NSMutableDictionary;

@interface _NSTreeNodeObservingTracker : NSObject {
    id _treeNodeObserver;
    NSArray *_availableModelAndProxyKeys;
    NSCountedSet *_treeNodeObservingTracking;
    id _observedTreeNodesData;
    struct __treeNodeObservingTrackerFlags { unsigned char _multipleObservedModelObjects : 1; unsigned char _registersObservingWithKVOPriorKey : 1; unsigned int _reservedModelObservingTrackerFlags : 30; } _treeNodeObservingTrackerFlags;
    NSMutableDictionary *_observedModelKeyPathInfoTable;
}

- (void)dealloc;
- (void)_registerOrUnregister:(BOOL)a0 observerNotificationsForKeyPath:(id)a1;
- (void)_registerOrUnregister:(BOOL)a0 observerNotificationsForKeyPath:(id)a1 ofModelObject:(id)a2;
- (void)_registerOrUnregister:(BOOL)a0 observerNotificationsForModelObject:(id)a1;
- (void)_startObservingModelObject:(id)a0;
- (void)_stopObservingModelObject:(id)a0;
- (id)initWithModelObserver:(id)a0 availableModelAndProxyKeys:(id)a1;
- (void)registerModelKeyPath:(id)a0;
- (void)registerObservingForAnalyzableKeyPath:(id)a0;
- (BOOL)registersObservingWithKVOPriorKey;
- (void)setRegistersObservingWithKVOPriorKey:(BOOL)a0;
- (void)startObservingModelObject:(id)a0;
- (void)startObservingModelObjectTree:(id)a0;
- (void)stopAllModeObjectObserving;
- (void)stopObservingModelObject:(id)a0;
- (void)unregisterModelKeyPath:(id)a0;
- (void)unregisterObservingForAnalyzableKeyPath:(id)a0;

@end
