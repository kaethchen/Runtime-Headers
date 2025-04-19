@class GFList;

@interface GFGraph : GFNode {
    GFList *_nodes;
    GFList *_connections;
    BOOL _finalizing;
    struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } *_graphLock;
    void *_unused2[3];
}

+ (Class)connectionClass;
+ (Class)baseClass;
+ (Class)proxyPortClass;

- (void)dealloc;
- (id)state;
- (BOOL)setState:(id)a0;
- (void)setUndoManager:(id)a0;
- (id)connections;
- (id)nodes;
- (void)setLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } *)a0;
- (BOOL)addNode:(id)a0;
- (void)removeNode:(id)a0;
- (id)nodeForPath:(id)a0;
- (void)__createProxyPortWithNode:(id)a0 portKey:(id)a1 forKey:(id)a2 withUserInfo:(id)a3;
- (id)proxyInputPorts;
- (id)_connections;
- (BOOL)addNode:(id)a0 forKey:(id)a1;
- (void)__createConnectionFrom:(id)a0 to:(id)a1 forKey:(id)a2 withUserInfo:(id)a3;
- (BOOL)_finalizing;
- (BOOL)_isConnectionKeyInUse:(id)a0;
- (BOOL)_isNodeKeyInUse:(id)a0;
- (void)_layoutUpdated;
- (BOOL)_loadState:(id)a0;
- (id)_nodes;
- (BOOL)_saveState:(id)a0 filterTarget:(id)a1 filterAction:(SEL)a2 flatten:(BOOL)a3;
- (void)_setNote:(id)a0 atIndex:(id)a1;
- (id)_uniqueConnectionKey;
- (id)_uniqueKeyFromNode:(id)a0;
- (id)_uniqueProxyPortKeyFromPort:(id)a0;
- (void)_willDeleteNodeInputPort:(id)a0;
- (void)_willDeleteNodeOutputPort:(id)a0;
- (void)applyFunctionOnConnections:(void /* function */ *)a0 context:(void *)a1;
- (void)applyFunctionOnNodes:(void /* function */ *)a0 context:(void *)a1;
- (BOOL)canAddNode:(id)a0;
- (BOOL)canCreateConnectionFromPort:(id)a0 toPort:(id)a1;
- (BOOL)canCreateProxyPortWithOriginalPort:(id)a0;
- (id)connectionForKey:(id)a0;
- (id)createConnectionFromPort:(id)a0 toPort:(id)a1;
- (id)createConnectionFromPort:(id)a0 toPort:(id)a1 forKey:(id)a2;
- (id)createProxyPortWithOriginalPort:(id)a0;
- (id)createProxyPortWithOriginalPort:(id)a0 forKey:(id)a1;
- (void)deleteConnection:(id)a0;
- (void)deleteConnectionForKey:(id)a0;
- (void)deleteInputPortForKey:(id)a0;
- (void)deleteOutputPortForKey:(id)a0;
- (void)deleteProxyPortForKey:(id)a0;
- (void)deleteProxyPortWithOriginalPort:(id)a0;
- (void)enumerateConnectionsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNodesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (Class)graphViewClass;
- (id)keyForConnection:(id)a0;
- (id)keyForNode:(id)a0;
- (id)nodeForKey:(id)a0;
- (id)pathForNode:(id)a0;
- (id)pathForPort:(id)a0;
- (id)portForPath:(id)a0;
- (id)proxyOutputPorts;
- (id)proxyPortForOriginalPort:(id)a0;
- (void)removeNodeForKey:(id)a0;
- (id)uniqueProxyPortKeyFromName:(id)a0;

@end
