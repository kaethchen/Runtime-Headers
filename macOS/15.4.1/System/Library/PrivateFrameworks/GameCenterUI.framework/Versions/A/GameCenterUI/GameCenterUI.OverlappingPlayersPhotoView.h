@class NSArray;

@interface GameCenterUI.OverlappingPlayersPhotoView : NSView {
    void /* unknown type, empty encoding */ playerViews;
    void /* unknown type, empty encoding */ playerSize;
    void /* unknown type, empty encoding */ layoutStyle;
}

@property (class, nonatomic, readonly) double knockoutAvatarSpace;

@property (nonatomic) void /* unknown type, empty encoding */ overlapPercentage;
@property (nonatomic, copy) NSArray *playerViews;
@property (nonatomic) void /* unknown type, empty encoding */ enableKnockoutSpace;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)applyWithPlayerAvatars:(id)a0;

@end
