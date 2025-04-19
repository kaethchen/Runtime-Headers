@interface RemindersUICore.TTRMCustomEarlyAlertViewController : NSViewController <NSTextFieldDelegate> {
    void /* unknown type, empty encoding */ displayDate;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ maxIntervalValue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_orderedUnits;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ intervalTextField;
@property (nonatomic, weak) void /* unknown type, empty encoding */ intervalUnitPopup;
@property (nonatomic, weak) void /* unknown type, empty encoding */ earlyAlertWarningTextField;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidLoad;
- (void)addCustomAlert:(id)a0;
- (void)cancelAlert:(id)a0;
- (void)detailTypePopUpAction:(id)a0;

@end
