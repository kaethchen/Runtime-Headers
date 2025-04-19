@class NSFont;

@interface JetUI.DynamicTextField : NSTextField {
    void /* unknown type, empty encoding */ adjustsFontForContentSizeCategory;
    void /* unknown type, empty encoding */ customTextStyle;
}

@property (nonatomic, retain) NSFont *font;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
