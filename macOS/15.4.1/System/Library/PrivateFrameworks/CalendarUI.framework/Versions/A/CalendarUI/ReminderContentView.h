@class NSImageView, NSString, NSClickGestureRecognizer, CalUIBoxOccurrenceContentView, CalUILabel, NSStackView;

@interface ReminderContentView : NSView <OccurrenceView> {
    CalUILabel *_titleField;
    NSImageView *_titleImage;
    NSImageView *_repeatImage;
    NSStackView *_titleStack;
    NSClickGestureRecognizer *_titleImageClickRecognizer;
    BOOL _shouldShowRepeat;
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
- (void)_titleImagePressed;
- (void)_updateCornerRadius;
- (id)firstTextField;
- (void)updateInsets;
- (void)updateWithEvents:(id)a0 fullUpdate:(BOOL)a1;

@end
