@class EKUIResizingTextField, EKAttendee, EKUICompositeGadget, EKUIProposedTimeResponseView, NSDate, NSArray;
@protocol EKUIProposedTimeActionHandler;

@interface EKUIProposedTimeGadget : EKUISingleViewGadget {
    NSArray *_existingConstraints;
}

@property (readonly, weak) EKUICompositeGadget *parentGadget;
@property (retain, nonatomic) EKAttendee *proposingAttendee;
@property (weak, nonatomic) id<EKUIProposedTimeActionHandler> actionHandler;
@property (nonatomic) unsigned long long orderIndex;
@property (readonly) EKUIResizingTextField *textField;
@property (readonly) EKUIProposedTimeResponseView *responseView;
@property (readonly) NSDate *proposedTime;

- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)updateWithDiff:(id)a0;
- (id)initWithCompositeGadget:(id)a0;
- (id)proposedTimeForAttendee:(id)a0;
- (BOOL)shouldDisplay;

@end
