@class NSTextField, NSArray, NSMenu, NSButton;

@interface EKUIRecurrenceSummaryGadget : EKUISingleViewGadget

@property (retain) NSTextField *textField;
@property (retain) NSButton *nextButton;
@property (retain) NSButton *previousButton;
@property (retain) NSButton *recurButton;
@property (retain) NSArray *horizontalConstraints;
@property (retain) NSMenu *recDiffMenu;
@property (retain) NSMenu *recurrenceNavMenu;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (BOOL)isEditable;
- (id)control;
- (id)initWithViewController:(id)a0;
- (id)summaryString;
- (void)recurButtonPressed;
- (void)revertAllChangesFromOriginal;
- (BOOL)shouldDisplay;
- (BOOL)shouldShowRecurrenceArrows;
- (BOOL)shouldShowRecurrenceDifference;
- (BOOL)shouldShowRecurrenceInfo;
- (void)showRecurrenceDifference;
- (void)updateHorizontalConstraintsAndButtons;
- (void)updateWithChanges:(id)a0;

@end
