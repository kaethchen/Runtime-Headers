@class NSLayoutConstraint, NSString, NSAttributedString, LeadingIconAndTextView, TrailingIconsAndTextView, CalUIBoxOccurrenceContentView, NSStackView;

@interface TimedContentView : CalUILayerBackedView <OccurrenceView> {
    TrailingIconsAndTextView *_titleAndCellIconsStack;
    LeadingIconAndTextView *_locationStack;
    LeadingIconAndTextView *_timeStack;
    NSStackView *_textContentView;
    NSLayoutConstraint *_maximizeHeightConstraint;
    NSLayoutConstraint *_bottomStackLessThanConstraint;
    NSLayoutConstraint *_bottomStackExactConstraint;
    NSLayoutConstraint *_topStackConstraint;
    BOOL _shouldShowRepeat;
    BOOL _shouldShowAttachment;
    BOOL _shouldShowAttendee;
    NSString *_locationImageName;
    NSString *_oldLocationImageName;
    NSAttributedString *_locationString;
    unsigned long long _attendeesIconState;
}

@property (readonly, weak, nonatomic) CalUIBoxOccurrenceContentView *parentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithParentView:(id)a0;
- (void)_setHiddenStateOfTrailingIcons:(double)a0;
- (void)_createLocationViewsIfNeeded;
- (double)_horizontalSpaceForContent;
- (id)firstTextField;
- (void)updateInsets;
- (void)updateWithEvents:(id)a0 fullUpdate:(BOOL)a1;

@end
