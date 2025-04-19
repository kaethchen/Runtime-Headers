@class NSString, NSColor, PKInk;

@interface PKInkingTool : PKTool

@property (readonly, nonatomic) NSString *inkType;
@property (readonly, nonatomic) NSColor *color;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) PKInk *ink;
@property (readonly, nonatomic) long long requiredContentVersion;

+ (double)_calculateEdgeWidthForWeight:(double)a0 type:(id)a1;
+ (double)_calculateWidthForWeight:(double)a0 type:(id)a1;
+ (void)_computeWeightInfoMapFor:(id)a0 in:(void *)a1;
+ (struct { struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; } x0; BOOL x1; long long x2; double x3; double x4; double x5; double x6; id x7; unsigned long long x8; })_contextForStroke:(id)a0 weight:(double)a1 type:(id)a2;
+ (double)_weightForWidth:(double)a0 type:(id)a1;
+ (void *)_weightInfoMap;
+ (double)_widthForWeight:(double)a0 type:(id)a1;
+ (id)behaviorForInkType:(id)a0;
+ (id)convertColor:(id)a0 fromDark:(BOOL)a1 to:(BOOL)a2;
+ (double)defaultWidthForInkType:(id)a0;
+ (double)maximumWidthForInkType:(id)a0;
+ (double)minimumWidthForInkType:(id)a0;

- (id)description;
- (double)_width;
- (id)initWithInk:(id)a0 width:(double)a1;
- (id)initWithInkType:(id)a0 color:(id)a1;
- (id)initWithInkType:(id)a0 color:(id)a1 width:(double)a2;

@end
