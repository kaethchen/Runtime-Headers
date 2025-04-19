@class VMUDominatorGraph;

@interface VMUDirectDominees : NSEnumerator {
    VMUDominatorGraph *_dg;
    unsigned int _node;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithDominatorGraph:(id)a0 rootNode:(unsigned int)a1;

@end
