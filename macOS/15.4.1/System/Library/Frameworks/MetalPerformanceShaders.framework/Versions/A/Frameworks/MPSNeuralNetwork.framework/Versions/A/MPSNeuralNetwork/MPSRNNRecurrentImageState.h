@interface MPSRNNRecurrentImageState : MPSState {
    id *recurrentImages;
    id *cellImages;
    int nLayers;
    BOOL _isTemporary;
}

- (void)dealloc;
- (void)setReadCount:(unsigned long long)a0;
- (BOOL)isTemporary;
- (id)getMemoryCellImageForLayerIndex:(unsigned long long)a0;
- (id)getRecurrentOutputImageForLayerIndex:(unsigned long long)a0;
- (id)initWithCommandBuffer:(id)a0 recurrentImageDescriptors:(id *)a1 cellImageDescriptors:(id *)a2 isTemporary:(BOOL)a3 layerCount:(int)a4;

@end
