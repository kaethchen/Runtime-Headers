@class NSImageView, NSString, NSLayoutConstraint, CalUIBoxOccurrenceContentView, CalUILabel, NSStackView;

@interface AllDayContentView : NSView <OccurrenceView> {
    CalUILabel *_titleField;
    NSImageView *_titleImage;
    NSImageView *_repeatImage;
    NSImageView *_attachmentImage;
    NSImageView *_attendeeImage;
    NSStackView *_titleStack;
    NSLayoutConstraint *_leadingToTitleStack;
    BOOL _shouldShowRepeat;
    BOOL _shouldShowAttachment;
    BOOL _shouldShowAttendee;
}

@property (readonly, weak, nonatomic) CalUIBoxOccurrenceContentView *parentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithParentView:(id)a0;
- (void)_setHiddenStateOfTrailingIcons;
- (id)firstTextField;
- (void)updateInsets;
- (void)updateWithEvents:(id)a0 fullUpdate:(BOOL)a1;

@end
