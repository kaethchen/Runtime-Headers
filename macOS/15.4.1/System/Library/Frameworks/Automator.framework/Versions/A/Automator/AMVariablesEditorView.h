@class NSObjectController, AMVariablesEditorDateFormatDelegate, NSPopUpButton, NSButton, NSTokenField, AMTokenField, NSBox, AMPathPopUpButton, NSTabView, CIColor, AMVariablesEditorWindowController, NSTextView, NSArray, OSAScriptView, NSTextField, NSColor;
@protocol AMVariableControllerProtocol;

@interface AMVariablesEditorView : NSView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titlebarFrame;
}

@property (weak) NSBox *_nameBox;
@property (weak) NSBox *_buttonBox;
@property (weak) NSBox *_customDateFormatBox;
@property (weak) NSBox *_customTimeFormatBox;
@property (weak) NSTextField *nameField;
@property (weak) NSPopUpButton *typePopUp;
@property (weak) NSObjectController *_variableController;
@property (weak) NSTabView *_tabView;
@property (weak) AMTokenField *valueField;
@property (weak) NSPopUpButton *_dateFormatPopUp;
@property (weak) NSPopUpButton *_timeFormatPopUp;
@property (weak) AMPathPopUpButton *_pathPopUp;
@property (weak) OSAScriptView *_scriptView;
@property (weak, nonatomic) NSPopUpButton *_shellScriptShell;
@property (weak) NSTextView *_shellScriptView;
@property (weak) NSButton *_doneButton;
@property (weak) NSButton *_cancelButton;
@property (weak) NSTextField *_dayOfWeekText;
@property (weak) NSTextField *_dayOfMonthText;
@property (weak) NSTextField *_monthText;
@property (weak) NSTextField *_yearText;
@property (weak, nonatomic) NSTokenField *_customDateFormat;
@property (weak) NSTokenField *_dayOfWeek;
@property (weak) NSTokenField *_dayOfMonth;
@property (weak) NSTokenField *_month;
@property (weak) NSTokenField *_year;
@property (weak, nonatomic) NSTokenField *_customTimeFormat;
@property (weak) NSTokenField *_hour;
@property (weak) NSTokenField *_minute;
@property (weak) NSTokenField *_second;
@property (weak) NSTokenField *_ampm;
@property (weak) NSTokenField *_timezone;
@property (weak) NSTokenField *_milliseconds;
@property (weak) NSTextField *_nameLabelTextField;
@property (weak) NSTextField *_valueLabelTextField;
@property (weak) NSTextField *_pathLabelTextField;
@property (weak) NSTextField *_formatDateLabelTextField;
@property (weak) NSTextField *_formatTimeLabelTextField;
@property (weak) NSTextField *_appleScriptLabelTextField;
@property (weak) NSTextField *_shellScriptLabelTextField;
@property (retain) NSArray *_crossTabViewConstraints;
@property BOOL didSwitchToCustomDateFormat;
@property BOOL didSwitchToCustomTimeFormat;
@property BOOL didSwitchToDefinedTimeFormat;
@property BOOL didSwitchToDefinedDateFormat;
@property BOOL useCustomDateFormat;
@property (retain) AMVariablesEditorDateFormatDelegate *dateFormatDelegate;
@property (retain) struct CGPath { } *windowClipPath;
@property (retain) struct CGPath { } *borderClipPath;
@property (retain) NSColor *titleTextColor;
@property (retain) NSColor *titlebarTopLineColor;
@property (retain) NSColor *titlebarBottomLineColor;
@property (retain) CIColor *titlebarTopGradientColor;
@property (retain) CIColor *titlebarBottomGradientColor;
@property (retain) NSColor *viewAreaTopLineColor;
@property (retain) NSColor *viewAreaBottomLineColor;
@property (retain) CIColor *viewAreaTopGradientColor;
@property (retain) CIColor *viewAreaBottomGradientColor;
@property (retain) CIColor *windowBorderColor;
@property (readonly, weak, nonatomic) NSObjectController *variableController;
@property (readonly, nonatomic) double customDateFormatBoxHeight;
@property (readonly, nonatomic) double customTimeFormatBoxHeight;
@property (readonly, weak, nonatomic) id<AMVariableControllerProtocol> workflowVariableConroller;
@property (weak, nonatomic) AMVariablesEditorWindowController *windowController;
@property (nonatomic) BOOL useCustomTimeFormat;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)ok:(id)a0;
- (void)cancel:(id)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)tokenField:(id)a0 completionsForSubstring:(id)a1 indexOfToken:(long long)a2 indexOfSelectedItem:(long long *)a3;
- (id)tokenField:(id)a0 displayStringForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 editingStringForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 hasMenuForRepresentedObject:(id)a1;
- (id)tokenField:(id)a0 readFromPasteboard:(id)a1;
- (id)tokenField:(id)a0 shouldAddObjects:(id)a1 atIndex:(long long)a2;
- (unsigned long long)tokenField:(id)a0 styleForRepresentedObject:(id)a1;
- (BOOL)tokenField:(id)a0 writeRepresentedObjects:(id)a1 toPasteboard:(id)a2;
- (void)updateControls;
- (void)setupDateTimeControlTokenField:(id)a0;
- (void)_reconfigureCrossTabViewConstraints;
- (struct CGPath { } *)newTodoRoundedWindowPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)populateDateFormatPopup;
- (void)populateTimeFormatPopup;
- (void)reLayout;
- (void)setCustomDateFormatControlsAreHidden:(BOOL)a0;
- (void)setCustomTimeFormatControlsAreHidden:(BOOL)a0;
- (void)setupButton:(id)a0;
- (void)setupDateControls;
- (void)setupShellScriptControls;
- (void)setupTimeControls;
- (void)unSetupDateTimeControls;
- (void)updateWindowClipPath;
- (void)useCustomDateFormat:(id)a0;
- (void)useCustomTimeFormat:(id)a0;
- (void)useDateFormat:(id)a0;
- (void)useTimeFormat:(id)a0;

@end
