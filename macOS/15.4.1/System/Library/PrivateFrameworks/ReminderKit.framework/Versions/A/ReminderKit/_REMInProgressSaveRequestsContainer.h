@class NSMutableArray;

@interface _REMInProgressSaveRequestsContainer : NSObject

@property (retain, nonatomic) NSMutableArray *inProgressSaveRequests;

- (id)init;
- (void).cxx_destruct;
- (id)_firstMatchInSaveRequests:(id /* block */)a0;
- (id)_latestSaveInProgressAccountForObjectID:(id)a0 saveRequest:(id)a1;
- (id)_latestSaveInProgressListForObjectID:(id)a0 fallbackAccount:(id)a1 fallbackParentList:(id)a2 saveRequest:(id)a3;
- (id)_latestSaveInProgressReminderForObjectID:(id)a0 fallbackAccount:(id)a1 fallbackList:(id)a2 fallbackParentList:(id)a3 fallbackParentReminder:(id)a4 saveRequest:(id)a5;
- (id)latestSaveInProgressAccount:(id)a0;
- (id)latestSaveInProgressList:(id)a0;
- (id)latestSaveInProgressReminder:(id)a0;
- (id)latestSaveInProgressReminderForReminderChangeItem:(id)a0;
- (void)saveRequestSaveDidFinish:(id)a0;
- (void)saveRequestSaveDidStart:(id)a0;

@end
