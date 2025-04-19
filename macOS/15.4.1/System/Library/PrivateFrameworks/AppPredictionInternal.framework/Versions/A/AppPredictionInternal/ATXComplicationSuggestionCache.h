@class _PASQueueLock;

@interface ATXComplicationSuggestionCache : NSObject {
    _PASQueueLock *_lock;
}

- (id)init;
- (void).cxx_destruct;
- (id)_fetchCachedRankedComplicationDescriptorsWithPath:(id)a0 error:(id *)a1;
- (BOOL)_writeComplicationsCache:(id)a0 path:(id)a1 withError:(id *)a2;
- (id)fetchInlineSetComplicationDescriptors;
- (id)fetchLandscapeModularSetComplicationDescriptors;
- (id)fetchModularSetComplicationDescriptors;
- (BOOL)writeComplicationsInlineSetCache:(id)a0;
- (BOOL)writeComplicationsLandscapeModularSetCache:(id)a0;
- (BOOL)writeComplicationsModularSetCache:(id)a0;

@end
