@interface FICustomNode : FIDSNode

- (void)dealloc;
- (id)init;
- (id)iteratorWithOptions:(unsigned int)a0;
- (id)nodesForSizing;
- (id)presentationNode;
- (id)propertyAsNumber:(unsigned int)a0 async:(BOOL)a1 options:(unsigned int)a2 error:(id *)a3;

@end
