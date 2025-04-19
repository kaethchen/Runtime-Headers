@class NSAdaptiveImageGlyph, NSString, NSImage, NSData, UTType, NSTextAttachmentView, NSFileWrapper;
@protocol NSTextAttachmentCell;

@interface NSTextAttachment : NSObject <NSTextAttachmentLayout, NSSecureCoding> {
    NSData *_data;
    UTType *_uti;
    NSString *_cacheKey;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    double _layoutPadding;
    struct { unsigned char _allowsTextAttachmentView : 1; unsigned char _embeddingType : 4; unsigned char _standaloneAlignment : 3; unsigned char _allocatesTextContainer : 1; unsigned char _prefersOldAttachmentBounds : 1; unsigned char _prefersOldImageForBounds : 1; unsigned char _cellWasExplicitlySet : 1; unsigned char _ignoresOrientation : 1; unsigned char _allowsEditingContents : 1; unsigned char _viewProviderPriority : 1; } _taFlags;
    NSFileWrapper *_fileWrapperForContents;
    NSImage *_image;
    NSTextAttachmentView *_wrapperView;
    id<NSTextAttachmentCell> _attachmentCell;
    NSAdaptiveImageGlyph *_adaptiveImageGlyph;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL _hasTextAttachmentViewCell;
@property (copy) NSData *contents;
@property (copy) NSString *fileType;
@property (retain) NSImage *image;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (retain) NSFileWrapper *fileWrapper;
@property (retain) id<NSTextAttachmentCell> attachmentCell;
@property double lineLayoutPadding;
@property BOOL allowsTextAttachmentView;
@property (readonly) BOOL usesTextAttachmentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)imageCache;
+ (Class)textAttachmentViewProviderClassForFileType:(id)a0;
+ (Class)textAttachmentClassForFileType:(id)a0;
+ (void)registerTextAttachmentClass:(Class)a0 forFileType:(id)a1;
+ (void)registerTextAttachmentViewProviderClass:(Class)a0 forFileType:(id)a1;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setImage:(id)a0;
- (id)contents;
- (id)image;
- (id)fileType;
- (id)initWithFileWrapper:(id)a0;
- (Class)textAttachmentViewProviderClass;
- (id)_attachmentCell;
- (void)setContentView:(id)a0;
- (id)_image;
- (id)accessibilityLabel;
- (id)adaptiveImageGlyph;
- (BOOL)allowsEditingContents;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)contentView;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (void)setAccessibilityLabel:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContents:(id)a0;
- (void)setEmbeddingType:(long long)a0;
- (void)setFileType:(id)a0;
- (BOOL)_allocatesTextContainer;
- (id)_cacheKey;
- (long long)_characterIndexForLocation:(id)a0 textContainer:(id)a1;
- (void)_drawInAlignedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3 applicationFrameworkContext:(long long)a4;
- (id)_imageForUTType_macOS:(id)a0;
- (void)_invalidateWrapperView;
- (BOOL)_isEmojiImage;
- (void)_setAllocatesTextContainer:(BOOL)a0;
- (void)_setupAPIPreferences;
- (void)_showAttachmentCell_iOS:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 characterIndex:(unsigned long long)a2;
- (void)_showAttachmentCell_macOS:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 characterIndex:(unsigned long long)a2;
- (void)_showWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3 applicationFrameworkContext:(long long)a4 acceptsViewProvider:(BOOL)a5;
- (void)_showWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(struct __CFDictionary { } *)a1 runRange:(struct { long long x0; long long x1; })a2 textLayoutFragment:(id)a3 inContext:(struct CGContext { } *)a4;
- (id)_textAttachmentCell;
- (void)detachView:(id)a0 fromParentView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingBounds;
- (long long)embeddingType;
- (BOOL)ignoresOrientation;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 location:(id)a3 textContainer:(id)a4 applicationFrameworkContext:(long long)a5;
- (void)setAllowsEditingContents:(BOOL)a0;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIgnoresOrientation:(BOOL)a0;
- (void)setStandaloneAlignment:(long long)a0;
- (long long)standaloneAlignment;
- (id)viewProviderForParentView:(id)a0 characterIndex:(unsigned long long)a1 layoutManager:(id)a2;
- (id)viewProviderForParentView:(id)a0 location:(id)a1 textContainer:(id)a2;

@end
