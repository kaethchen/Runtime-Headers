@class NSString;

@interface AXVLabeledElement : NSObject

@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) id element;
@property (retain, nonatomic) NSString *fullLabel;
@property (retain, nonatomic) NSString *shortLabel;
@property (retain, nonatomic) NSString *numberedLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectangle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectangleFlipped;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelRectangleFlipped;
@property (nonatomic) BOOL hasBeenCollected;
@property (nonatomic) unsigned long long desiredArrowOrientation;
@property (retain, nonatomic) id textMarkerRange;

+ (struct CGSize { double x0; double x1; })sizeOfNumberedBadgeForLabel:(id)a0 arrowOrientation:(unsigned long long)a1 useFixedWidthNumerals:(BOOL)a2;

- (void).cxx_destruct;
- (id)recognitionStringsForLabelMode:(unsigned long long)a0;
- (id)attributedStringForLabelMode:(unsigned long long)a0;
- (long long)horizontalPositionCompare:(id)a0;
- (id)initWithElement:(id)a0 fullLabel:(id)a1 shortLabel:(id)a2 rectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)initWithElement:(id)a0 label:(id)a1 rectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updateLabelRectangleForLabelMode:(unsigned long long)a0 useFixedWidthNumerals:(BOOL)a1;
- (long long)verticalPositionCompare:(id)a0;

@end
