@interface MusicUI.ToolTipPopoverViewController : NSViewController <NSPopoverDelegate> {
    void /* unknown type, empty encoding */ popoverDidCloseHandler;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ iconImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_popover;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)popoverDidClose:(id)a0;

@end
