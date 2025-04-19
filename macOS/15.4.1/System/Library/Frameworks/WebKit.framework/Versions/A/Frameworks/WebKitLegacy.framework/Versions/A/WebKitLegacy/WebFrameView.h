@class WebFrame, NSView, WebFrameViewPrivate;
@protocol WebDocumentView;

@interface WebFrameView : NSView <WebCoreFrameView> {
    WebFrameViewPrivate *_private;
}

@property (readonly, nonatomic) WebFrame *webFrame;
@property (readonly, nonatomic) NSView<WebDocumentView> *documentView;
@property (nonatomic) BOOL allowsScrolling;
@property (readonly, nonatomic) BOOL canPrintHeadersAndFooters;
@property (readonly, nonatomic) BOOL documentViewShouldHandlePrint;

+ (BOOL)_canShowMIMETypeAsHTML:(id)a0;
+ (Class)_viewClassForMIMEType:(id)a0 allowingPlugins:(BOOL)a1;
+ (id)_viewTypesAllowImageTypeOmission:(BOOL)a0;

- (void)dealloc;
- (void)scrollPageDown:(id)a0;
- (void)scrollLineDown:(id)a0;
- (void)setNextKeyView:(id)a0;
- (id)_contentView;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)keyDown:(id)a0;
- (void)scrollLineUp:(id)a0;
- (void)scrollPageUp:(id)a0;
- (void)scrollToBeginningOfDocument:(id)a0;
- (void)scrollToEndOfDocument:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (BOOL)wantsUpdateLayer;
- (float)_area;
- (void)_goBack;
- (float)_verticalKeyboardScrollDistance;
- (Class)_customScrollViewClass;
- (id)_makeDocumentViewForDataSource:(id)a0;
- (BOOL)_firstResponderIsFormControl;
- (void)_frameSizeChanged;
- (void)_goForward;
- (BOOL)_hasScrollBars;
- (float)_horizontalKeyboardScrollDistance;
- (float)_horizontalPageScrollDistance;
- (void)_install;
- (BOOL)_isFlippedDocument;
- (BOOL)_isScrollable;
- (BOOL)_isVerticalDocument;
- (id)_largestChildWithScrollBars;
- (id)_largestScrollableChild;
- (BOOL)_pageHorizontally:(BOOL)a0;
- (BOOL)_pageInBlockProgressionDirection:(BOOL)a0;
- (BOOL)_pageVertically:(BOOL)a0;
- (BOOL)_scrollHorizontallyBy:(float)a0;
- (BOOL)_scrollLineHorizontally:(BOOL)a0;
- (BOOL)_scrollLineVertically:(BOOL)a0;
- (BOOL)_scrollOverflowInDirection:(unsigned char)a0 granularity:(unsigned char)a1;
- (BOOL)_scrollToBeginningOfDocument;
- (BOOL)_scrollToEndOfDocument;
- (BOOL)_scrollVerticallyBy:(float)a0;
- (id)_scrollView;
- (void)_setCustomScrollViewClass:(Class)a0;
- (void)_setDocumentView:(id)a0;
- (void)_setWebFrame:(id)a0;
- (float)_verticalPageScrollDistance;
- (Class)_viewClassForMIMEType:(id)a0;
- (id)_webView;
- (struct NakedPtr<WebCore::LocalFrame> { struct LocalFrame *x0; })_web_frame;
- (id)_webcore_effectiveFirstResponder;
- (void)printDocumentView;
- (id)printOperationWithPrintInfo:(id)a0;

@end
