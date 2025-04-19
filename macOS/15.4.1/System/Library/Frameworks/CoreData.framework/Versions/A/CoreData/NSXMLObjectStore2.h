@class NSDictionary;

@interface NSXMLObjectStore2 : NSAtomicStore {
    unsigned long long _nextPK64;
    void *_reserved;
    NSDictionary *_entitiesForConfiguration;
}

+ (id)metadataForPersistentStoreWithURL:(id)a0 error:(id *)a1;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreWithURL:(id)a1 error:(id *)a2;

- (void)dealloc;
- (id)type;
- (BOOL)save:(id *)a0;
- (id)_createDocument;
- (id)_entitiesForConfiguration;
- (BOOL)_isDocumentXMLStore:(id)a0;
- (id)_metadataXML;
- (void)_processDBInfoNode:(id)a0;
- (id)_processMetadataNode:(id)a0;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (BOOL)load:(id *)a0;
- (id)newCacheNodeForManagedObject:(id)a0;
- (id)newReferenceObjectForManagedObject:(id)a0;
- (unsigned long long)nextPK64;
- (void)updateCacheNode:(id)a0 fromManagedObject:(id)a1;
- (void)willRemoveCacheNodes:(id)a0;
- (void)willRemoveFromPersistentStoreCoordinator:(id)a0;

@end
