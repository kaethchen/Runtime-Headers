@class NSColor;

@interface SwiftUI.ListTableRowView : NSTableRowView {
    void /* unknown type, empty encoding */ backgroundHost;
    void /* unknown type, empty encoding */ defaultBackgroundColor;
    void /* unknown type, empty encoding */ separatorConfiguration;
    void /* unknown type, empty encoding */ _defaultSeparatorConfiguration;
    void /* unknown type, empty encoding */ _defaultSeparatorInsets;
    void /* unknown type, empty encoding */ defaultUnemphasizedSelectionColor;
    void /* unknown type, empty encoding */ _isLastRow;
}

@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL emphasized;
@property (nonatomic, readonly) double _floatingGroupRowPopLineOffsetFromTop;
@property (nonatomic, readonly) BOOL _wantsDefaultBackgroundDrawingBehavior;
@property (nonatomic, retain) NSColor *separatorColor;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _separatorRect;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawSeparatorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)drawsSeparator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEmphasized;
- (BOOL)isSelected;
- (id)secondarySelectedControlColor;

@end
