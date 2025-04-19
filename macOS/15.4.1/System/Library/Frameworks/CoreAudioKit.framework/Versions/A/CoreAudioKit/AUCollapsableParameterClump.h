@class NSTextField, NSArray, NSView, NSButton, NSColor;

@interface AUCollapsableParameterClump : NSView {
    NSTextField *titleField;
    NSButton *disclosureTriangle;
    NSView *contentView;
    NSArray *parameterStrips;
    unsigned int displayFlags;
    struct CGSize { double width; double height; } otherFrameSize;
}

@property BOOL collapsable;
@property BOOL expanded;
@property (retain) NSColor *frameColor;
@property (retain) NSColor *fillColor;
@property double lineWidth;

+ (double)collapsedHeight;

- (void)dealloc;
- (void)cleanup;
- (void)toggleExpanded:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned int)displayFlags;
- (void)setDisplayFlags:(unsigned int)a0;
- (void)setAppearanceData:(id)a0;
- (id)clumpName;
- (double)expandedHeight;
- (BOOL)hasNonExpertParams;
- (id)initWithParameterStrips:(id)a0 title:(id)a1 displayFlags:(unsigned int)a2 width:(double)a3;
- (id)initWithParameterStrips:(id)a0 title:(id)a1 displayFlags:(unsigned int)a2 width:(double)a3 showDisclosure:(BOOL)a4;
- (void)updateParametersForSetFlags;

@end
