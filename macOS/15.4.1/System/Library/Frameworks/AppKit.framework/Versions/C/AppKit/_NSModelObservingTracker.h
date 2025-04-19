@class NSArray, NSMutableDictionary, NSMutableIndexSet, NSMutableArray;

@interface _NSModelObservingTracker : NSObject {
    id _modelObserver;
    NSArray *_availableModelAndProxyKeys;
    NSArray *_indexReferenceModelObjectArray;
    NSMutableIndexSet *_observedModelIndexData;
    id _observedModelObjectsData;
    struct __modelObservingTrackerFlags { unsigned char _multipleObservedModelObjects : 1; unsigned int _reservedModelObservingTrackerFlags : 31; } _modelObservingTrackerFlags;
    NSMutableDictionary *_observedModelKeyPathInfoTable;
    NSMutableArray *_modelAndProxyKeysArray;
}

- (void)dealloc;
- (void)setIndexReferenceModelObjectArray:(id)a0 clearAllModelObjectObserving:(BOOL)a1;
- (void)addObservedKey:(id)a0;
- (void)_dealloc;
- (void)_logObservingInfo;
- (void)_registerOrUnregister:(BOOL)a0 observerNotificationsForKeyPath:(id)a1;
- (void)_registerOrUnregister:(BOOL)a0 observerNotificationsForKeyPath:(id)a1 ofModelObject:(id)a2;
- (void)_registerOrUnregister:(BOOL)a0 observerNotificationsForModelObject:(id)a1;
- (void)_startObservingModelObject:(id)a0;
- (void)_stopObservingModelObject:(id)a0;
- (void)analyzeKeyPath:(id)a0 registerOrUnregister:(BOOL)a1;
- (void)clearAllModelObjectObserving;
- (id)indexReferenceModelObjectArray;
- (id)initWithModelObserver:(id)a0 availableModelAndProxyKeys:(id)a1;
- (id)modelAndProxyKeysObserved;
- (void)registerModelKeyPath:(id)a0;
- (void)registerModelKeyPaths:(id)a0 unregisterModelKeyPaths:(id)a1;
- (void)removeObservedKey:(id)a0;
- (void)replaceIndexReferenceModelObjectArrayWithEqualCopy:(id)a0;
- (void)setObservingToModelObjectsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)startObservingModelObject:(id)a0;
- (void)startObservingModelObjectAtReferenceIndex:(unsigned long long)a0;
- (void)startObservingModelObjectsAtReferenceIndexes:(id)a0;
- (void)stopObservingModelObject:(id)a0;
- (void)stopObservingModelObjectAtReferenceIndex:(unsigned long long)a0;
- (void)stopObservingModelObjectsAtReferenceIndexes:(id)a0;
- (void)unregisterModelKeyPath:(id)a0;
- (void)updateReferenceIndexesToReflectInsertionAtIndex:(unsigned long long)a0;
- (void)updateReferenceIndexesToReflectInsertionAtIndexes:(id)a0;
- (void)updateReferenceIndexesToReflectRemovalAtIndex:(unsigned long long)a0;
- (void)updateReferenceIndexesToReflectRemovalAtIndexes:(id)a0;

@end
