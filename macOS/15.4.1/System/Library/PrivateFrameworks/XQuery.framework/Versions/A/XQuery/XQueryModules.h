@class NSMutableArray, NSMutableDictionary;

@interface XQueryModules : NSObject {
    NSMutableArray *_namespaces;
    NSMutableDictionary *_namespaceIDs;
    NSMutableArray *_prologs;
}

+ (void)initialize;
+ (id)modules;
+ (id)builtinNamespaceForID:(long long)a0;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)namespaceForID:(unsigned long long)a0;
- (void)addProlog:(id)a0 forID:(unsigned long long)a1;
- (unsigned long long)namespaceID:(id)a0 canCreate:(BOOL)a1;
- (id)prologForID:(long long)a0;

@end
