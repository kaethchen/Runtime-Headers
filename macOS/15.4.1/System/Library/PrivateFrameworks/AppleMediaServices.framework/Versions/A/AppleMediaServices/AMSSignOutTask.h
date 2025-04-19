@class NSArray;

@interface AMSSignOutTask : AMSTask

@property (retain) NSArray *accounts;

+ (id)_signOutOfAccount:(id)a0;

- (void).cxx_destruct;
- (id)initWithAccounts:(id)a0;
- (id)performTask;

@end
