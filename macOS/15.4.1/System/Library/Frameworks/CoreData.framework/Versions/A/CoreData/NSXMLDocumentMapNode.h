@class NSXMLNode;

@interface NSXMLDocumentMapNode : NSStoreMapNode {
    NSXMLNode *_node;
}

- (void)dealloc;
- (id)description;
- (id)valueForKey:(id)a0;
- (id)initWithXMLNode:(id)a0 objectID:(id)a1;

@end
