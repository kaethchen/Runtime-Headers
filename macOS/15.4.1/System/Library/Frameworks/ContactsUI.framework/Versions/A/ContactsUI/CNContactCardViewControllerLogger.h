@class NSObject;
@protocol OS_os_log;

@interface CNContactCardViewControllerLogger : NSObject <CNContactCardViewControllerLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;

- (id)init;
- (void).cxx_destruct;
- (void)logDidSetPropertyKeysToDisplay:(id)a0;
- (void)logCommitedEditingResults:(id)a0;
- (void)logContactWasSet:(id)a0;
- (void)logDidReceiveRefreshedContact:(id)a0 forSetContact:(id)a1;
- (void)logDidSaveContact:(id)a0;
- (void)logHasLikenessChangesToCommitForContact:(id)a0;
- (void)logReceivedRequestToSaveContact:(id)a0;
- (void)logTotalCalculatedDesiredHeight:(double)a0;
- (void)logWidget:(id)a0 reportedCustomSpacing:(double)a1;
- (void)logWidget:(id)a0 reportedDesiredHeight:(double)a1;
- (void)logWillSaveContact:(id)a0;

@end
