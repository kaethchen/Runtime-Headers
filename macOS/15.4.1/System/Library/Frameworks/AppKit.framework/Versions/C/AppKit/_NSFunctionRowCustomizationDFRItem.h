@class NSTouchBarItem, NSCompressionGroupLayout, NSView;

@interface _NSFunctionRowCustomizationDFRItem : NSObject {
    NSView *_itemView;
    struct CGSize { double width; double height; } _minSize;
    struct CGSize { double width; double height; } _preferredSize;
    struct CGSize { double width; double height; } _maxSize;
    BOOL _hasCachedMinMaxSize;
}

@property (retain) NSCompressionGroupLayout *compressionLayout;
@property (readonly) NSTouchBarItem *representedItem;
@property long long section;
@property (readonly) NSView *itemView;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double width; double height; } reducedMetricsThreshold;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property BOOL requiresExactMinSize;
@property BOOL forcesReducedMetricsCompression;
@property BOOL requiresTrueCenterLayout;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)invalidateSizes;
- (void)_updateMinMaxSizeIfNeeded;
- (BOOL)isCenteredInTree:(id)a0;

@end
