@interface BiometryLockoutInvalidationSource : DarwinNotificationInvalidationSource

- (void)updateStatus;
- (id)initWithPreflightCache:(id)a0;
- (id)invalidationReason;

@end
