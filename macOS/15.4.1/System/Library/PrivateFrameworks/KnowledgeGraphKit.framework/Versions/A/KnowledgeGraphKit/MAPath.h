@class NSMutableArray, NSMutableSet;

@interface MAPath : NSObject <NSCopying> {
    NSMutableArray *_edges;
    NSMutableSet *_nodes;
}

+ (id)path;
+ (id)pathWithEdges:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)enumerateWithBlock:(id /* block */)a0;
- (BOOL)isEqualToPath:(id)a0;
- (void)setEdges:(id)a0;
- (id)nodeAtIndex:(unsigned long long)a0;
- (BOOL)containsNode:(id)a0;
- (id)sourceNode;
- (id)targetNode;
- (unsigned long long)edgesCount;
- (unsigned long long)nodesCount;
- (id)edgesForLabel:(id)a0;
- (id)nodesForLabel:(id)a0;
- (void)removeFirstEdge;
- (void)addFirstEdge:(id)a0;
- (void)addLastEdge:(id)a0;
- (BOOL)containsEdge:(id)a0;
- (id)edgeAtIndex:(unsigned long long)a0;
- (double)edgesWeight;
- (id)graphRepresentation;
- (void)removeAllEdges;
- (void)removeLastEdge;

@end
