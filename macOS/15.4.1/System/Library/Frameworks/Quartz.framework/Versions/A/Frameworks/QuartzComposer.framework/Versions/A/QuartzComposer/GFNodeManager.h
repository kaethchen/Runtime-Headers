@class NSString;

@interface GFNodeManager : NSObject {
    NSString *_namespace;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    struct __CFDictionary { } *_registry;
    unsigned long long _infoListSize;
    struct GFNodeInfo { id x0; id x1; SEL x2; SEL x3; id x4; id x5; } *_infoList;
    void *_unused[4];
}

+ (void)initialize;
+ (void)lock;
+ (void)unlock;
+ (BOOL)trylock;
+ (void)checkIdentifier:(id)a0;
+ (id)instantiateNodeWithClassName:(id)a0 identifier:(id)a1;
+ (id)instantiateNodeWithName:(id)a0;
+ (id)managerForNodeNamespace:(id)a0;

- (id)description;
- (id)init;
- (id)_attributesFromArchive:(id)a0;
- (id)_nodeFromArchive:(id)a0;
- (void)enumerateNodesUsingBlock:(id /* block */)a0;
- (id)initWithNamespace:(id)a0;
- (id)instantiateNodeWithName:(id)a0;
- (BOOL)isNodeRegisteredWithName:(id)a0;
- (void)loadPlugInAtPath:(id)a0;
- (void)loadPlugInsInFolder:(id)a0 withExtensions:(id)a1;
- (void)loadPlugInsInLibrary:(id)a0 withExtensions:(id)a1;
- (id)nodeAttributesWithName:(id)a0;
- (id)nodeInstanceWithName:(id)a0;
- (id)nodeNameWithClassName:(id)a0 identifier:(id)a1;
- (id)nodeNames;
- (id)nodeNamesContainingAttributes:(id)a0;
- (id)nodeNamesExcludingAttributes:(id)a0;
- (id)nodeNamesMatchingAttributes:(id)a0;
- (id)nodeNamespace;
- (void)registerNode:(id)a0 withName:(id)a1;
- (void)registerNodeWithClass:(Class)a0;
- (void)registerNodeWithClass:(Class)a0 identifier:(id)a1;
- (void)registerNodeWithName:(id)a0 constructor:(id)a1 instantiateSelector:(SEL)a2 attributesSelector:(SEL)a3 info:(id)a4;
- (void)unregisterNodeWithName:(id)a0;

@end
