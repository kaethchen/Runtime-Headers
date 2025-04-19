@interface RemindersUICore.TTRMCustomRepeatViewController : NSViewController <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ displayDate;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ detail;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ detailTypePopUpButton;
@property (nonatomic, weak) void /* unknown type, empty encoding */ intervalTextField;
@property (nonatomic, weak) void /* unknown type, empty encoding */ everyLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ frequencyLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ detailContainerView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidLoad;
- (void)cancelAction:(id)a0;
- (void)detailTypePopUpAction:(id)a0;
- (void)okAction:(id)a0;

@end
