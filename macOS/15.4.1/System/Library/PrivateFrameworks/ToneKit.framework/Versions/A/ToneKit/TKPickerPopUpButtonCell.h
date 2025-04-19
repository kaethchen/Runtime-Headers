@class NSMenuItem;

@interface TKPickerPopUpButtonCell : NSPopUpButtonCell {
    NSMenuItem *_selectedSubmenuItem;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawTitle:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (void)resetSubmenuItemSelection;
- (void)selectSubmenuItem:(id)a0;

@end
