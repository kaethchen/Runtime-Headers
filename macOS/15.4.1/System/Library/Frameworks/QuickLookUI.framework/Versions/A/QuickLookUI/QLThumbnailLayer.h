@protocol QLPreviewItem;

@interface QLThumbnailLayer : CALayer {
    id<QLPreviewItem> _item;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentRect;
    struct __QLThumbnail { } *_thumbnail;
    struct CGImage { } *_thumbnailImage;
}

@property (retain) id<QLPreviewItem> previewItem;
@property BOOL iconMode;
@property struct CGImage { } *imageContents;
@property (readonly) BOOL hasThumbnail;
@property (readonly) struct CGSize { double width; double height; } thumbnailMaxSize;
@property (readonly) struct CGSize { double width; double height; } thumbnailSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailFrame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentRect;

+ (void)initialize;

- (void).cxx_destruct;
- (void)discard;
- (id)actionForKey:(id)a0;
- (void)removeFromSuperlayer;
- (void)update;
- (struct CGImage { } *)createImageForMaximumSize:(struct CGSize { double x0; double x1; })a0 options:(struct __CFDictionary { } *)a1;
- (void)_thumbnailingDone:(struct __QLThumbnail { } *)a0;
- (id)initWithPreviewItem:(id)a0;
- (void)thumbnail:(struct __QLThumbnail { } *)a0 computedImage:(struct CGImage { } *)a1;

@end
