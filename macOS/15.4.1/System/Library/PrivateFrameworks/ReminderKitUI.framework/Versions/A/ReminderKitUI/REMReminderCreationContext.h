@class NSData, NSString, NSURL, NSAttributedString, REMObjectID, NSUserActivity, NSDateComponents, CLLocation;

@interface REMReminderCreationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) REMObjectID *reminderID;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *notes;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *locationString;
@property (nonatomic) long long locationProximity;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSData *siriFoundInAppsData;
@property (retain, nonatomic) NSUserActivity *userActivity;
@property (nonatomic) BOOL wantsExtendedDetailOnlyView;
@property (nonatomic) BOOL titleIsGeneratedSuggestion;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDelegate:(id)a0;

@end
