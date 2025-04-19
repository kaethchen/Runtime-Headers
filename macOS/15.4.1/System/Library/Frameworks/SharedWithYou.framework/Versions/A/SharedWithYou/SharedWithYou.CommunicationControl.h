@interface SharedWithYou.CommunicationControl : NSControl <NSMenuDelegate> {
    void /* unknown type, empty encoding */ sBehaviors;
    void /* unknown type, empty encoding */ communicationChannel;
    void /* unknown type, empty encoding */ itemProvider;
    void /* unknown type, empty encoding */ highlight;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ disambiguationMenu;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;
- (void)layout;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)menu:(id)a0 willHighlightItem:(id)a1;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)attributionMenuItemTapped:(id)a0;

@end
