@interface RemindersUICore.TTRMCustomRepeatYearsView : NSView {
    void /* unknown type, empty encoding */ customRepeatYears;
    void /* unknown type, empty encoding */ monthsOfTheYearGridView;
    void /* unknown type, empty encoding */ weekAndDayView;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ monthsOfTheYearContainerView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ onTheToggleButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ weekAndDayContainerView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dayButtonAction:(id)a0;
- (void)onTheToggleButtonAction:(id)a0;

@end
