@class NSArray;

@interface CTDPSDPreviewRef : CUIPSDImageRef {
    struct _PSDImageInfo { unsigned int width; unsigned int height; unsigned short mode; unsigned short bitsPerSample; unsigned short samplesPerPixel; int isDrawable; } _imageInfo;
    long long _layerCount;
    long long _sliceCount;
    long long _columnWidth;
    long long _rowHeight;
    NSArray *_layerIndexLayout;
    long long _sliceRowCount;
    long long _sliceColumnCount;
    NSArray *_sliceRects;
}

- (void)dealloc;
- (id)initWithPath:(id)a0;
- (id)createImageFromVerticalSlices:(id)a0 horizontalSliceCount:(unsigned int)a1 atLayer:(unsigned int)a2;
- (id)createImageOfGradientAtLayer:(unsigned int)a0;
- (id)createSlicedImageAtLayer:(unsigned int)a0;
- (id)createSlicedImageAtLayer:(unsigned int)a0 overlayAlphaChannel:(long long)a1;
- (void)evaluateSliceGrid;
- (BOOL)hasGradient;
- (BOOL)hasRegularSliceGrid;
- (id)imagePreviewAtLayer:(unsigned int)a0 overlayAlphaChannel:(long long)a1;
- (long long)indexOfDrawingLayerType:(long long)a0;
- (long long)numberOfAlphaChannels;
- (long long)numberOfGradientLayers;
- (long long)sliceColumnCount;
- (long long)sliceRowCount;

@end
