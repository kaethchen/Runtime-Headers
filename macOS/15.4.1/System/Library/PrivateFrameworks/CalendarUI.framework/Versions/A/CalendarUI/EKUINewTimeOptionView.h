@class NSImageView, NSString, NSImage, EKViewController, EKInviteeAlternativeTime, CalUILabel;
@protocol EKUINewTimeOptionViewDelegate;

@interface EKUINewTimeOptionView : CalUIControlView <NSAccessibilityButton>

@property (weak) EKViewController *viewController;
@property (retain) NSImageView *selectionImageView;
@property (retain) CalUILabel *dayLabel;
@property (retain) CalUILabel *timeLabel;
@property (retain) CalUILabel *attendeesLabel;
@property (retain) NSImage *busyStatusIcon;
@property long long index;
@property (weak) id<EKUINewTimeOptionViewDelegate> delegate;
@property (retain, nonatomic) EKInviteeAlternativeTime *alternativeTime;
@property (nonatomic) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (void)keyDown:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)hasConflictedParticipants;
- (id)initWithController:(id)a0 delegate:(id)a1 alternativeTime:(id)a2 index:(long long)a3;

@end
