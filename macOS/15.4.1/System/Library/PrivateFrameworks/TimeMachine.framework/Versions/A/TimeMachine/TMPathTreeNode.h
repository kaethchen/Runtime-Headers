@class NSString, NSArray, NSMutableDictionary;

@interface TMPathTreeNode : NSObject {
    NSMutableDictionary *_childMap;
}

@property (weak) TMPathTreeNode *parentNode;
@property BOOL isRootNode;
@property (readonly) unsigned long long _totalSubtreeNodeCount;
@property (readonly) unsigned long long _totalSubtreeLeafNodeCount;
@property (readonly) NSString *name;
@property (readonly) NSString *path;
@property (readonly) NSString *extension;
@property (retain) id data;
@property (readonly) NSArray *children;
@property (readonly) BOOL isLeafNode;
@property BOOL isTerminalNode;

+ (id)rootNode;
+ (id)rootNode:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)childNodeNamed:(id)a0;
- (void)_enumerateTree:(id /* block */)a0 path:(id)a1 depth:(long long)a2 outStop:(BOOL *)a3;
- (void)addChildNode:(id)a0;
- (BOOL)containsChildNodeNamed:(id)a0;
- (id)dataForPath:(id)a0;
- (void)enumerateSubtreeUsingBlock:(id /* block */)a0;
- (id)insertPath:(id)a0;
- (id)insertPath:(id)a0 data:(id)a1;
- (id)insertPath:(id)a0 data:(id)a1 usingBlock:(id /* block */)a2;
- (id)insertPath:(id)a0 usingBlock:(id /* block */)a1;
- (id)nodeForPath:(id)a0;
- (long long)pathMatchForPath:(id)a0;
- (void)postOrderEnumerateTree:(id /* block */)a0;
- (void)removeChildNodeNamed:(id)a0;
- (void)removePath:(id)a0;
- (void)removeWholePath:(id)a0;

@end
