@class NSString, QLCustomTextLayer;
@protocol QLThumbnailLayerDelegate, QLPreviewItem;

@interface QLIndexSheetThumbnailLayer : CALayer <CAAnimationDelegate> {
    id<QLPreviewItem> _item;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cellFrame;
    struct __QLThumbnail { } *_thumbnail;
    struct CGImage { } *_thumbnailImage;
    QLCustomTextLayer *_titleLayer;
    BOOL _isIcon;
    BOOL _hasThumbnail;
}

@property id<QLThumbnailLayerDelegate> delegate;
@property (retain) id<QLPreviewItem> previewItem;
@property struct CGImage { } *imageContents;
@property (readonly) BOOL hasThumbnail;
@property (readonly) struct CGSize { double width; double height; } thumbnailMaxSize;
@property (readonly) struct CGSize { double width; double height; } thumbnailSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } thumbnailFrame;
@property long long tableRow;
@property long long tableColumn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)a0;
- (BOOL)_isSelected;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)actionForKey:(id)a0;
- (void)removeFromSuperlayer;
- (struct CGImage { } *)createImageForMaximumSize:(struct CGSize { double x0; double x1; })a0 options:(struct __CFDictionary { } *)a1;
- (void)discardThumbnail;
- (id)initWithPreviewItem:(id)a0;
- (void)thumbnail:(struct __QLThumbnail { } *)a0 computedImage:(struct CGImage { } *)a1 appearance:(id)a2;
- (void)thumbnailingDone:(struct __QLThumbnail { } *)a0 appearance:(id)a1;
- (void)updateBorder:(BOOL)a0 appearance:(id)a1;
- (void)updateFrameWithCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateThumbnailWithAppearance:(id)a0;

@end
