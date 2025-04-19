@class NSString;

@interface LACDTONotificationFactory : NSObject <LACDTONotificationFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_securityDelayEndedNotificationWithIdentifier:(id)a0 body:(id)a1 callbackURL:(id)a2 after:(double)a3 maxAge:(double)a4;
- (id)newSecurityDelayRequiredNotification;
- (id)securityDelayEndedNotificationForPendingEvaluation:(id)a0 after:(double)a1 validity:(double)a2;

@end
