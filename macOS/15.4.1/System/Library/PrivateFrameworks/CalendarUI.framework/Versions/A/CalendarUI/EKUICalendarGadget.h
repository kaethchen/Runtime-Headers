@class EKUICalendarPopUpButton, EKUIGadget;

@interface EKUICalendarGadget : EKUISingleViewGadget

@property (retain) EKUICalendarPopUpButton *calendarPicker;
@property (weak, nonatomic) EKUIGadget *compositeParent;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (BOOL)isEditable;
- (BOOL)needsExpansion;
- (double)preferredWidth;
- (id)control;
- (id)initWithViewController:(id)a0;
- (void)calendarSelected:(id)a0;
- (double)horizontalPadding;
- (BOOL)shouldDisplay;
- (void)updateWithChanges:(id)a0;

@end
