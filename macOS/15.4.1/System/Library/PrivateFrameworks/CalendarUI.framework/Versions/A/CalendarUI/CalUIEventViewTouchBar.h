@class NSSegmentedControl, CalUICalendarPickerTouchBarItemController, NSButton, NSTouchBar, NSGroupTouchBarItem, NSLayoutConstraint, EKEvent, NSPopoverTouchBarItem, CalUIEventViewReportJunkControl, CNUserActionTouchBar, NSString, CalUIDatePickerTouchBar, NSCustomTouchBarItem;
@protocol CalUIEventViewTouchBarDelegate;

@interface CalUIEventViewTouchBar : NSObject <CalUIDatePickerTouchBarDelegate, NSTouchBarProvider>

@property (weak) id<CalUIEventViewTouchBarDelegate> delegate;
@property (retain) NSTouchBar *touchBar;
@property (retain) NSButton *escButton;
@property (retain) NSButton *escSecondaryButton;
@property (retain) NSButton *escWidthMeasurementButton;
@property (retain) NSLayoutConstraint *escButtonWidthConstraint;
@property (retain) NSCustomTouchBarItem *escButtonTouchBarItem;
@property (retain) CalUICalendarPickerTouchBarItemController *calendarPickerController;
@property (retain) NSButton *inspectorToggleButton;
@property (retain) NSGroupTouchBarItem *inspectorFieldsTouchBarItem;
@property (retain) NSPopoverTouchBarItem *locationPopoverTouchBarItem;
@property (retain) NSPopoverTouchBarItem *eventTimePopoverTouchBarItem;
@property (retain) NSPopoverTouchBarItem *inviteesPopoverTouchBarItem;
@property (retain) NSTouchBar *locationTouchBar;
@property (retain) CalUIDatePickerTouchBar *datePickerTouchBar;
@property (retain) NSTouchBar *inviteesTouchBar;
@property (retain) CNUserActionTouchBar *userActionTouchBar;
@property (retain) CalUIEventViewReportJunkControl *reportJunkControl;
@property (retain) NSSegmentedControl *invitationResponseControl;
@property (retain) NSTouchBar *invitationReponseTouchBar;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)updateTouchBar;
- (void)_updateTouchBarIdentifiers;
- (id)createEscButton;
- (id)createInvitationResponseControl;
- (id)_accessibilityDescriptionForParticipantStatus:(long long)a0;
- (void)_copyEventValuesFromDatePickerTouchBar;
- (void)_copyEventValuesToDatePickerTouchBar;
- (id)_responseImageForParticipantStatus:(long long)a0 state:(long long)a1;
- (BOOL)_shouldShowEscButton;
- (BOOL)_shouldShowEscSecondaryButton;
- (void)_updateDatePickerTouchBar;
- (void)_updateEscButtons;
- (void)_updateEventViewInvitationControl;
- (void)_updateEventViewInvitationResponseTouchBar;
- (void)_updateReportJunkControl;
- (void)_updateUserActionTouchBar;
- (BOOL)allDayModificationsAllowed;
- (id)createDatePickerTouchBar;
- (id)createEscSecondaryButton;
- (id)createInspectorFieldsTouchBarItem;
- (id)createInspectorToggleButton;
- (id)createInvitationDeleteButton;
- (id)createInvitationReportJunkControl;
- (id)createInvitationTouchBarItem;
- (id)createUserActionTouchBar;
- (void)datePickerAllDayChanged;
- (void)datePickerTimeChanged;
- (void)datePickerTimeIsChanging;
- (void)dateTimeFormatChanged;
- (void)dismissAllPopovers;
- (void)escButtonPressed:(id)a0;
- (void)eventViewInvitationSelected:(id)a0;
- (BOOL)isInterestedInChanges:(id)a0;
- (void)showDateTimePopover;
- (void)showInviteesPopover;
- (void)showLocationPopover;

@end
