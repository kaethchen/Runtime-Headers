@class NSArray, CTDPSDPreviewRef;

@interface CTDPhotoshopAssetView : NSView {
    struct _PSDImageInfo { unsigned int width; unsigned int height; unsigned short mode; unsigned short bitsPerSample; unsigned short samplesPerPixel; int isDrawable; } _imageInfo;
    unsigned long long _layerCount;
    long long _sliceCount;
    long long _columnWidth;
    long long _rowHeight;
    long long _sliceRowCount;
    long long _sliceColumnCount;
    NSArray *_sliceRects;
    long long _channelIndex;
}

@property (copy, nonatomic) NSArray *layerNames;
@property (copy, nonatomic) NSArray *layerIndexLayout;
@property (retain, nonatomic) CTDPSDPreviewRef *psdImageRef;

- (void)dealloc;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (BOOL)acceptsNotificationFromClipView:(id)a0;
- (void)clipViewFrameOrBoundsDidChangeNotification:(id)a0;
- (void)createLayerNames;
- (void)evaluateSliceGrid;
- (void)getRow:(long long *)a0 column:(long long *)a1 forLayerIndex:(long long)a2;
- (id)gridNodesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasRegularSliceGrid;
- (struct CGPoint { double x0; double x1; })imagePointForGridNode:(long long)a0;
- (struct CGPoint { double x0; double x1; })labelPointForGridNode:(long long)a0;
- (void)setAlphaChannelIndex:(long long)a0;
- (long long)sliceColumnCount;
- (long long)sliceRowCount;
- (void)tileLayersForClipView:(id)a0;

@end
