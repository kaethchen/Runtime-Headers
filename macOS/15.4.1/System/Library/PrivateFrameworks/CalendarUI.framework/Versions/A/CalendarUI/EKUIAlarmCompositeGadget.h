@class NSArray, NSMutableArray;

@interface EKUIAlarmCompositeGadget : EKUICompositeGadget

@property (retain) NSMutableArray *alarmGadgets;
@property (retain) NSArray *existingConstraints;
@property BOOL showingNewAlarm;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (BOOL)isEditable;
- (double)preferredWidth;
- (void)updateConstraints;
- (id)initWithViewController:(id)a0;
- (BOOL)updateWithDiff:(id)a0;
- (id)addAlarmGadget;
- (void)addNewAlarmGadget;
- (void)addNoneAlarmGadget;
- (BOOL)shouldDisplay;
- (id)subgadgets;
- (void)updateGadgetsAddButton;

@end
