@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (void)dealloc;
- (BOOL)isOpen;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)layerEnumerator;
- (BOOL)_isGroupType:(unsigned int)a0;
- (void)enumerateLayersUsingBlock:(id /* block */)a0;
- (id)initWithImageRef:(id)a0 layerIndex:(unsigned int)a1;
- (BOOL)isGroupEnd;
- (BOOL)isGroupStart;
- (BOOL)isLayerGroup;
- (id)layerNames;
- (id)layerRefAtIndex:(unsigned int)a0;
- (unsigned int)numberOfLayers;

@end
