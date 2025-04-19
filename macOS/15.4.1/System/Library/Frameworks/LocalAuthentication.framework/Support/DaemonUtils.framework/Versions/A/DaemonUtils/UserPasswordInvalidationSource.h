@interface UserPasswordInvalidationSource : DarwinNotificationInvalidationSource

- (void)updateStatus;
- (id)initWithPreflightCache:(id)a0;
- (id)invalidationReason;

@end
