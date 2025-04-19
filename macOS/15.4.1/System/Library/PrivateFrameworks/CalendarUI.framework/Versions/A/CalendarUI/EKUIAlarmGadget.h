@class EKUIAlarmButton, NSArray, EKUIAlarmContainerView, EKUIPopUpButton, EKAlarm, EKUIAlarmCompositeGadget;

@interface EKUIAlarmGadget : EKUILabeledGadget

@property (retain) EKUIAlarmContainerView *container;
@property (retain) EKUIPopUpButton *alarmPicker;
@property (retain) EKUIAlarmButton *addButton;
@property unsigned long long currentTrigger;
@property (weak) EKUIAlarmCompositeGadget *alarmsContainer;
@property (retain) NSArray *alarmConstraints;
@property (retain) EKAlarm *alarm;
@property BOOL addButtonAvailible;

- (void).cxx_destruct;
- (double)baselineOffset;
- (BOOL)isEditable;
- (void)updateConstraints;
- (id)labelString;
- (id)control;
- (id)addMenuItemForTrigger:(unsigned long long)a0;
- (id)alarmDescriptionWithAbbreviation:(BOOL)a0;
- (void)alarmTriggerSelected;
- (id)defaultAlarmDescriptionWithAbbreviation:(BOOL)a0;
- (BOOL)hideAddAlarmView;
- (id)initWithCompositeGadget:(id)a0;
- (void)mouseEnteredGadgetView;
- (void)mouseExitedGadgetView;
- (double)pixelsBetweenLabelAndControl;
- (double)preferredControlWidth;
- (double)relativeOffsetForTrigger:(unsigned long long)a0;
- (void)setMenuItem:(id)a0 title:(id)a1 withAbbreviatedTitle:(id)a2;
- (BOOL)shouldDisplay;
- (BOOL)showAddAlarmView;
- (id)titleForTrigger:(unsigned long long)a0 abbreviated:(BOOL)a1 hasTravelTime:(BOOL)a2;
- (unsigned long long)triggerForRelativeOffset:(double)a0;
- (void)updateAlarmWithTrigger:(unsigned long long)a0;
- (void)updateMenu;
- (void)updateWithAlarm:(id)a0 timeToLeaveAlarm:(BOOL)a1;
- (id)viewForBaselineAlignment;

@end
