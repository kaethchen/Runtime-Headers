@class NSString, NSImage;

@interface NSCachedTableRowView : NSTableRowView

@property (class, readonly) NSString *defaultIdentifier;

@property (retain) NSImage *cachedImage;

- (void)dealloc;
- (Class)_animatorClass;
- (void)_cacheRowImageFromTableView;
- (void)_setTrackingAreasDirty:(unsigned long long)a0;
- (long long)_trackingAreasDirty;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)setEmphasized:(BOOL)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
