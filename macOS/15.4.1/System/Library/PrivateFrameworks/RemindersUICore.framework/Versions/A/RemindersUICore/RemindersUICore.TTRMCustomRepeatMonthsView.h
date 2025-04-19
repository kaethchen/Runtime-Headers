@interface RemindersUICore.TTRMCustomRepeatMonthsView : NSView {
    void /* unknown type, empty encoding */ customRepeatMonths;
    void /* unknown type, empty encoding */ daysOfTheMonthGridView;
    void /* unknown type, empty encoding */ weekAndDayView;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ eachToggleButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ daysOfTheMonthContainerView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ onTheToggleButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ weekAndDayContainerView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dayButtonAction:(id)a0;
- (void)eachToggleButtonAction:(id)a0;
- (void)onTheToggleButtonAction:(id)a0;

@end
