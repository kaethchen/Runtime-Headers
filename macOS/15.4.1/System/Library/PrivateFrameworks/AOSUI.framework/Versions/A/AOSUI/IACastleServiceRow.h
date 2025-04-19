@class NSTextField, MMService, NSProgressIndicator, NSLayoutConstraint, NSButton, IACastleIconView;

@interface IACastleServiceRow : NSTableRowView {
    NSButton *_enableButton;
    IACastleIconView *_iconView;
    NSTextField *_nameField;
    NSTextField *_nameFieldAlt;
    NSTextField *_statusField;
    NSTextField *_progressField;
    NSProgressIndicator *_spinner;
    NSProgressIndicator *_determineStatusSpinner;
    NSButton *_optionsButton;
    NSLayoutConstraint *_progressSmallServiceSpacer;
    NSLayoutConstraint *_progressLargeServiceSpacer;
    double _spinnerStopTime;
    double _determineStatusSpinnerStopTime;
}

@property (retain, nonatomic) MMService *service;
@property (nonatomic, setter=setRowEnabled:) BOOL isRowEnabled;

+ (id)createFromNib;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)update;
- (BOOL)isRTL;
- (void)doUpdate:(id)a0;
- (void)enableServicePressed:(id)a0;
- (void)optionsButtonPressed:(id)a0;
- (void)startDelayedSpinner;
- (BOOL)statusSpinnerShouldContinue;
- (void)stopDetermineStatusSpinner:(id)a0;
- (void)stopSpinner:(id)a0;
- (void)updateOptionsButton;

@end
