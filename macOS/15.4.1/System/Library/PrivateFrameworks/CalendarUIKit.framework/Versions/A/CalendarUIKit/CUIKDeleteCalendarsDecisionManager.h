@class NSString, NSArray, CUIKDeleteCalendarsConfirmationInfo, NSMutableArray;

@interface CUIKDeleteCalendarsDecisionManager : NSObject {
    NSArray *_calendars;
    NSMutableArray *_confirmations;
    BOOL _performed;
    BOOL _canceled;
    BOOL _reportSpam;
}

@property (readonly, nonatomic) BOOL rejected;
@property (readonly, nonatomic) unsigned long long rejectionReason;
@property (readonly, nonatomic) NSString *rejectionTitle;
@property (readonly, nonatomic) NSString *rejectionDetails;
@property (readonly, nonatomic) CUIKDeleteCalendarsConfirmationInfo *nextConfirmation;

+ (id)_cancelButtonText;
+ (id)_deleteAndDontNotifyButtonText;
+ (id)_deleteAndNotifyButtonText;
+ (id)_deleteButtonText;
+ (id)_removeButtonText;
+ (id)_shouldDeleteCalendarContainingMeetingsWithTitle:(id)a0 isDualType:(BOOL)a1 hasInvitations:(BOOL)a2;
+ (id)_shouldDeleteSharedToMeCalendarWithTitle:(id)a0;
+ (id)_shouldDeleteSubscribedCalendarWithTitle:(id)a0 canBeJunk:(BOOL)a1;
+ (id)_thisCalendarCantBeDeletedPlural:(BOOL)a0;
+ (id)_unsubscribeAndReportJunkButtonText;
+ (id)_unsubscribeButtonText;
+ (id)_yesNoConfirmationWithPrompt:(id)a0 dialog:(id)a1 yesText:(id)a2;

- (void).cxx_destruct;
- (void)perform;
- (id)initWithCalendars:(id)a0;
- (void)_process;
- (void)_addConfirmation:(id)a0;
- (void)_rejectDeleteCalendarFromUnwriteableAccountPlural:(BOOL)a0;
- (void)_rejectRemainingCalendarCannotBeDefaultSchedulingCalendarPlural:(BOOL)a0;
- (BOOL)_validateDeletableWithError:(id *)a0;
- (unsigned long long)commitDecision;
- (BOOL)selectConfirmationOptionAtIndex:(long long)a0;

@end
