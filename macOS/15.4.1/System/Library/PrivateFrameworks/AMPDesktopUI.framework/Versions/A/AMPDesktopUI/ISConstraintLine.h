@class NSString, NSLayoutConstraint;

@interface ISConstraintLine : NSObject

@property (retain, nonatomic) NSLayoutConstraint *constraint;
@property (nonatomic) BOOL drawn;
@property (nonatomic) struct CGPoint { double x; double y; } firstPoint;
@property (nonatomic) struct CGPoint { double x; double y; } secondPoint;
@property (nonatomic) struct CGPoint { double x; double y; } labelPoint;
@property (nonatomic) BOOL vertical;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } firstRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } secondRect;
@property (nonatomic) double offset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentArea;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentLabelArea;
@property (readonly, nonatomic) NSString *labelText;

+ (id)newLine:(id)a0;

- (void).cxx_destruct;
- (void)calculateLayout:(id)a0 offset:(double)a1 originFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)getDrawBaseForSideAttribute:(long long)a0 of:(id)a1 withProvider:(id)a2;
- (BOOL)isVertical:(long long)a0;

@end
