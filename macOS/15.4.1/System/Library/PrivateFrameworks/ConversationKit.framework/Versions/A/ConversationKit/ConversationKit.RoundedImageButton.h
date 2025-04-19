@class NSImage;

@interface ConversationKit.RoundedImageButton : ConversationKit.CallControlsButton <CNKRoundedImageButtonProtocol> {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_badgeLayer;
    void /* unknown type, empty encoding */ symbol;
    void /* unknown type, empty encoding */ showBadge;
    void /* unknown type, empty encoding */ badgeColor;
}

@property (nonatomic, retain) NSImage *symbolImage;
@property (nonatomic, retain) NSImage *image;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (void).cxx_destruct;
- (void)layout;

@end
