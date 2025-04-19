@class NSMutableArray;

@interface MAPaths : NSObject {
    NSMutableArray *_paths;
}

+ (id)paths;
+ (id)pathsWithPaths:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)enumerateWithBlock:(id /* block */)a0;
- (void)addPath:(id)a0;
- (id)pathAtIndex:(unsigned long long)a0;
- (void)setPaths:(id)a0;
- (id)graphRepresentationWithStrictNodes:(BOOL)a0 strictEdges:(BOOL)a1;
- (void)removeAllPaths;
- (id)uniqueEdgesForLabel:(id)a0;
- (id)uniqueNodesForLabel:(id)a0;

@end
