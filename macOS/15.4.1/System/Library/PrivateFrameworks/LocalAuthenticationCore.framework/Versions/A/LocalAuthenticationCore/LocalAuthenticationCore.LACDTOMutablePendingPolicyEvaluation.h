@class NSString, NSURL, NSDate;

@interface LocalAuthenticationCore.LACDTOMutablePendingPolicyEvaluation : NSObject <LACDTOPendingPolicyEvaluation> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ callbackReason;
    void /* unknown type, empty encoding */ callbackURL;
    void /* unknown type, empty encoding */ notificationScheduledAt;
    void /* unknown type, empty encoding */ coolOffStarted;
    void /* unknown type, empty encoding */ ratchetUUID;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) void /* unknown type, empty encoding */ isInvalidated;
@property (nonatomic, copy) NSString *callbackReason;
@property (nonatomic, copy) NSURL *callbackURL;
@property (nonatomic, copy) NSDate *notificationScheduledAt;
@property (nonatomic, copy) NSDate *coolOffStarted;
@property (nonatomic, copy) NSString *ratchetUUID;
@property (nonatomic, readonly) BOOL hasNotifiedUserAboutCompletion;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isNotificationScheduledForDate:(id)a0;

@end
