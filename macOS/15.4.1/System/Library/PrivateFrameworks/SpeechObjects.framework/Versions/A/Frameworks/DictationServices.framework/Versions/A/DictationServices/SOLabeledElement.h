@class NSString, NSMutableArray;

@interface SOLabeledElement : NSObject <SO_AXElementNamesItem>

@property (retain, nonatomic) id element;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } elementFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelFrame;
@property (retain, nonatomic) NSMutableArray *labels;
@property (nonatomic) unsigned long long labelNumber;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *numberedLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelRectangleFlipped;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerRectangleFlipped;
@property (nonatomic) BOOL hasBeenCollected;
@property (nonatomic) long long desiredArrowOrientation;
@property (nonatomic) long long badgeIndicatorMask;
@property (retain, nonatomic) id textMarkerRange;
@property (nonatomic) long long badgeAlignment;
@property (copy, nonatomic) id /* block */ labelChosenHandler;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectangle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectangleFlipped;
@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) BOOL isSpacer;

+ (id)numberFormatter;
+ (struct CGSize { double x0; double x1; })sizeOfNumberedBadgeForLabel:(id)a0 arrowOrientation:(long long)a1 useFixedWidthNumerals:(BOOL)a2;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)recognitionStringsForLabelMode:(int)a0;
- (id)attributedStringForLabelMode:(int)a0;
- (struct CGSize { double x0; double x1; })elementLabelContainerSize;
- (id)initWithElement:(id)a0 labels:(id)a1 rectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
