@class VMUDominatorGraph;

@interface VMUDominatorRoots : NSEnumerator {
    VMUDominatorGraph *_dg;
    unsigned int _i;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithDominatorGraph:(id)a0;

@end
