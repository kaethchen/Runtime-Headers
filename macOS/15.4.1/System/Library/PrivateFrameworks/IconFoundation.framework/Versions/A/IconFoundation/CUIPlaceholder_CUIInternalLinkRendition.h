@class CUIPlaceholderCUIRenditionSliceInformation, CUIPlaceholderCUIRenditionMetrics, CUIStructuredThemeStore, CUIPlaceholderCUIRenditionKey;

@interface CUIPlaceholder_CUIInternalLinkRendition : CUIPlaceholderCUIThemeRendition {
    unsigned int _nimages;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _imageRect[16];
    struct CGImage *_image[16];
    struct CGImage { } *_unslicedImage;
    CUIPlaceholderCUIRenditionMetrics *_renditionMetrics;
    CUIPlaceholderCUIRenditionSliceInformation *_sliceInformation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    CUIStructuredThemeStore *_sourceProvider;
    CUIPlaceholderCUIRenditionKey *_referenceKey;
    struct CGSize { double width; double height; } _originalUncroppedSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alphaCroppedFrame;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)data;
- (int)pixelFormat;
- (id)metrics;
- (BOOL)isOpaque;
- (id)properties;
- (id)initWithCSIData:(id)a0 forKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a1 version:(unsigned int)a2;
- (BOOL)isTiled;
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7 : 4; unsigned int x8 : 28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128]; } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0]; } x11; } *)a0 version:(unsigned int)a1;
- (void)_setStructuredThemeStore:(id)a0;
- (int)bitmapEncoding;
- (BOOL)edgesOnly;
- (BOOL)isInternalLink;
- (BOOL)isScaled;
- (id)linkingToRendition;
- (id)sliceInformation;

@end
