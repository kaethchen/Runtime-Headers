@interface FAScreenTimeWrapper : NSObject

- (void)refresh;
- (BOOL)activityEnabledForUser;
- (BOOL)activityEnablementChanged;
- (id)getScreenTimeUsageGraphForUser;
- (id)initWithUserDSID:(id)a0;

@end
