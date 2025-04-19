@class NSColor, WebView;

@interface WebTextTouchBarItemController : NSTextTouchBarItemController {
    struct RetainPtr<NSColor> { void *m_ptr; } _textColor;
    struct RetainPtr<WebTextListTouchBarViewController> { void *m_ptr; } _textListTouchBarViewController;
    WebView *_webView;
}

@property (nonatomic) BOOL textIsBold;
@property (nonatomic) BOOL textIsItalic;
@property (nonatomic) BOOL textIsUnderlined;
@property (nonatomic) long long currentTextAlignment;
@property (retain, nonatomic) NSColor *textColor;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)itemForIdentifier:(id)a0;
- (id)textListViewController;
- (void)_webChangeColor:(id)a0;
- (void)_webChangeTextAlignment:(id)a0;
- (void)_webChangeTextStyle:(id)a0;
- (id)initWithWebView:(id)a0;
- (id)webTextListTouchBarViewController;

@end
