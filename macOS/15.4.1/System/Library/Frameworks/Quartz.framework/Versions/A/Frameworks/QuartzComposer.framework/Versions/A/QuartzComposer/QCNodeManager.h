@interface QCNodeManager : GFNodeManager {
    void *_unused2[4];
}

- (id)_attributesFromCompositionPath:(id)a0;
- (id)_attributesFromComposition:(id)a0;
- (void)loadPlugInFromComposition:(id)a0 name:(id)a1;
- (id)_patchFromComposition:(id)a0;
- (id)_patchFromCompositionPath:(id)a0;
- (id)attributesFromComposition:(id)a0;
- (id)instantiateNodeWithName:(id)a0;
- (BOOL)isNodePrivateWithName:(id)a0;
- (void)loadPlugInAtPath:(id)a0;
- (id)nodeNames;
- (void)registerNode:(id)a0 withName:(id)a1;
- (void)registerNodeWithClass:(Class)a0 identifier:(id)a1;
- (void)registerNodeWithClass:(Class)a0 identifier:(id)a1 isPrivate:(BOOL)a2;

@end
