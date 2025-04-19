@class NSXMLObjectStore2, NSXMLNode;

@interface NSXMLObjectStoreCacheNode2 : NSAtomicStoreCacheNode {
    NSXMLNode *_externalData;
    NSXMLObjectStore2 *_store;
}

- (void)dealloc;
- (id)description;
- (id)valueForKey:(id)a0;
- (id)entityName;
- (id)store;
- (void)setStore:(id)a0;
- (id)externalData;
- (id)initWithData:(id)a0 objectID:(id)a1;
- (id)oidReferenceData;
- (void)resetCaches;

@end
