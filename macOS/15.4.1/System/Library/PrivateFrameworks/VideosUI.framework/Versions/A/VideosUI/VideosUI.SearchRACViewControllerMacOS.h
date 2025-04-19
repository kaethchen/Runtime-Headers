@interface VideosUI.SearchRACViewControllerMacOS : NSViewController <NSComboBoxDataSource, NSComboBoxDelegate, NSTextViewDelegate> {
    void /* unknown type, empty encoding */ additionalParameters;
    void /* unknown type, empty encoding */ searchRacManager;
    void /* unknown type, empty encoding */ loadingManager;
    void /* unknown type, empty encoding */ racConfiguration;
    void /* unknown type, empty encoding */ lastSelectedIndex;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ horizontalDividerView;
    void /* unknown type, empty encoding */ menuBoxTitle;
    void /* unknown type, empty encoding */ menuOptionBox;
    void /* unknown type, empty encoding */ commentTextTitle;
    void /* unknown type, empty encoding */ textEntryView;
    void /* unknown type, empty encoding */ cancelButton;
    void /* unknown type, empty encoding */ submitButton;
    void /* unknown type, empty encoding */ completion;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)comboBox:(id)a0 objectValueForItemAtIndex:(long long)a1;
- (void)comboBoxSelectionDidChange:(id)a0;
- (long long)numberOfItemsInComboBox:(id)a0;
- (void)textDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)cancelAction;
- (void)submitAction;

@end
