@interface HMDBackgroundOperationAccessoryManagerDataSource : HMDBackgroundOperationManagerDataSource

+ (id)name;

- (void)dealloc;
- (id)values;
- (void)_handleAccessoryIsReachable:(id)a0;
- (id)initWithOperationManager:(id)a0 notificationCenter:(id)a1;

@end
