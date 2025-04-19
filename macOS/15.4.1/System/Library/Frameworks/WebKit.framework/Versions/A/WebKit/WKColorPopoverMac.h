@class NSString;

@interface WKColorPopoverMac : NSObject <WKColorPickerUIMac, WKPopoverColorWellDelegate, NSWindowDelegate> {
    BOOL _lastChangedByUser;
    void *_picker;
    struct RetainPtr<WKPopoverColorWell> { void *m_ptr; } _popoverWell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (void)setColor:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)didClosePopover;
- (void)didChooseColor:(id)a0;
- (id)initWithFrame:(const struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } *)a0 inView:(id)a1;
- (void)setAndShowPicker:(void *)a0 withColor:(id)a1 supportsAlpha:(BOOL)a2 suggestions:(void *)a3;

@end
