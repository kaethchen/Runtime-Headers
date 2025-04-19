@class NSImage;

@interface NSCachedTableCellView : NSControl

@property (retain) NSImage *cachedImage;

- (void)dealloc;
- (void)_setTrackingAreasDirty:(unsigned long long)a0;
- (long long)_trackingAreasDirty;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;

@end
