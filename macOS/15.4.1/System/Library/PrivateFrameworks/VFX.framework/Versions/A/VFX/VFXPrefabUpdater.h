@class VFXNode, NSMutableArray;

@interface VFXPrefabUpdater : NSObject {
    unsigned long long _importOptions;
    NSMutableArray *_operations;
    VFXNode *_rootSrc;
    VFXNode *_rootDst;
    struct __CFDictionary { } *_srcToDst;
    struct __CFDictionary { } *_dstToSrc;
}

- (void)_associate:(id)a0 with:(id)a1;
- (void)applyDiff:(id)a0;
- (void)_syncNode:(id)a0 with:(id)a1;
- (id)_dstAssociatedNode:(id)a0;
- (BOOL)_dstHasAssociatedNode:(id)a0;
- (id)_findAssociatedNode:(id)a0 inSubtree:(id)a1 ignoring:(id)a2;
- (id)_findChild:(id)a0 inChildrenOf:(id)a1 index:(unsigned long long)a2;
- (id)_srcAssociatedNode:(id)a0;
- (void)addOperation:(long long)a0 src:(id)a1 dst:(id)a2;
- (void)associateNodeTree:(id)a0 withNodeTree:(id)a1 root:(id)a2;
- (void)collectOrphanNodes:(id)a0 dst:(id)a1;
- (id)diffOld:(id)a0 withNew:(id)a1 options:(unsigned long long)a2;
- (void)updatePrefab:(id)a0 withNewPrefab:(id)a1 options:(unsigned long long)a2;

@end
