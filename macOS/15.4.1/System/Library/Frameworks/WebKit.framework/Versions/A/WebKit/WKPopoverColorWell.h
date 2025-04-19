@protocol WKPopoverColorWellDelegate;

@interface WKPopoverColorWell : NSPopoverColorWell {
    struct RetainPtr<NSColorList> { void *m_ptr; } _suggestedColors;
    struct WeakObjCPtr<id<WKPopoverColorWellDelegate>> { id m_weakReference; } _webDelegate;
}

@property (weak, nonatomic) id<WKPopoverColorWellDelegate> webDelegate;

+ (id)_colorPopoverCreateIfNecessary:(BOOL)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_showPopover;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)popoverDidClose:(id)a0;
- (void)setSuggestedColors:(id)a0;

@end
