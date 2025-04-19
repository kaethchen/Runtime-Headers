@class NSMutableDictionary, NSDictionary, NSXMLElement, NSXMLDocument;

@interface NSXMLDocumentMap : NSPersistentStoreMap {
    NSXMLDocument *_document;
    NSXMLElement *_oidnode;
    NSMutableDictionary *_theMap;
    NSMutableDictionary *_byEntityName;
}

@property (retain, nonatomic) NSDictionary *mappingsForValidation;

- (void)dealloc;
- (id)dataForKey:(id)a0;
- (void)_processMetadataNode:(id)a0;
- (void)addObject:(id)a0 objectIDMap:(id)a1;
- (id)handleFetchRequest:(id)a0;
- (id)initWithDocument:(id)a0 forStore:(id)a1;
- (unsigned long long)nextPK64;
- (void)removeObject:(id)a0 objectIDMap:(id)a1;
- (id)retainedObjectIDsForRelationship:(id)a0 forObjectID:(id)a1;
- (void)updateObject:(id)a0 objectIDMap:(id)a1;

@end
