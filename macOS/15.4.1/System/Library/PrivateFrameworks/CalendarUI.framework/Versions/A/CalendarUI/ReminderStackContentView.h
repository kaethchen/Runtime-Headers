@class NSImageView, NSString, NSLayoutConstraint, CalUIBoxOccurrenceContentView, CalUILabel, NSStackView;

@interface ReminderStackContentView : NSView <OccurrenceView> {
    CalUILabel *_titleField;
    CalUILabel *_moreField;
    NSImageView *_titleImage;
    NSStackView *_titleStack;
    NSLayoutConstraint *_titleStackYCenteringConstraint;
}

@property (readonly, weak, nonatomic) CalUIBoxOccurrenceContentView *parentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithParentView:(id)a0;
- (BOOL)_event1:(id)a0 ordersBeforeEvent2:(id)a1;
- (id)firstTextField;
- (void)updateInsets;
- (void)updateWithEvents:(id)a0 fullUpdate:(BOOL)a1;

@end
