@class NSString, ICSAlternateTimeProposal, ICSDateValue;

@interface ICSUserAddress : ICSProperty

@property (nonatomic) BOOL rsvp;
@property (retain, nonatomic) NSString *cn;
@property (nonatomic) int cutype;
@property (retain, nonatomic) NSString *dir;
@property (nonatomic) int partstat;
@property (nonatomic) int schedulestatus;
@property (nonatomic) int scheduleagent;
@property (nonatomic) int scheduleforcesend;
@property (nonatomic) int role;
@property (retain, nonatomic) ICSDateValue *partstatModified;
@property (nonatomic) ICSAlternateTimeProposal *alternateTimeProposal;
@property (nonatomic) BOOL x_apple_self_invited;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *x_apple_telephone;
@property (retain, nonatomic) NSString *likenessDataString;
@property (retain, nonatomic) NSString *x_apple_inviterName;

+ (id)ICSStringFromScheduleForceSend:(int)a0;
+ (id)ICSStringFromRole:(int)a0;
+ (id)ICSStringFromScheduleStatus:(int)a0;
+ (id)URLForNoMail;
+ (id)ICSStringFromCalendarUser:(int)a0;
+ (id)ICSStringFromParticipationStatus:(int)a0;
+ (id)ICSStringFromScheduleAgent:(int)a0;
+ (int)scheduleForceSendFromICSString:(id)a0;
+ (int)calendarUserFromICSString:(id)a0;
+ (int)participationStatusFromICSString:(id)a0;
+ (int)roleFromICSString:(id)a0;
+ (int)scheduleAgentFromICSString:(id)a0;
+ (int)scheduleStatusFromICSString:(id)a0;

- (id)initWithURL:(id)a0;
- (void)setURL:(id)a0;
- (id)displayName;
- (id)phoneNumber;
- (id)emailAddress;
- (id)initWithEmailAddress:(id)a0;
- (id)initWithPhoneNumber:(id)a0;
- (BOOL)hasPhoneNumber;
- (BOOL)isPhoneNumber;
- (BOOL)hasEmailAddress;
- (void)fixAddress;
- (BOOL)isEmailAddress;
- (BOOL)isHTTPAddress;
- (BOOL)isHTTPSAddress;
- (id)propertiesToHide;
- (id)propertiesToObscure;
- (id)sanitizeAddressString:(id)a0;
- (int)scheduleAgentWithDefaultValue:(int)a0;
- (void)setX_calendarserver_email:(id)a0;
- (BOOL)shouldObscureParameter:(id)a0;
- (BOOL)shouldObscureValue;
- (id)x_calendarserver_email;

@end
