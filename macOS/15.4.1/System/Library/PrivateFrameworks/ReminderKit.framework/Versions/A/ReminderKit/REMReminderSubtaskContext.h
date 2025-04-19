@class REMReminder;

@interface REMReminderSubtaskContext : NSObject

@property (retain, nonatomic) REMReminder *reminder;
@property (readonly, nonatomic) REMReminder *parentReminder;

- (void).cxx_destruct;
- (id)fetchRemindersWithError:(id *)a0;
- (id)initWithReminder:(id)a0;
- (id)fetchObjectIDsOfCompletedSubtasksWithError:(id *)a0;
- (id)fetchObjectIDsOfUnsupportedSubtasksWithError:(id *)a0;
- (id)fetchRemindersForMovingWithError:(id *)a0;
- (id)fetchRemindersForMovingWithFetchOptions:(id)a0 error:(id *)a1;
- (id)fetchRemindersWithFetchOptions:(id)a0 error:(id *)a1;
- (id)fetchSubtasksMarkedForDeletionWithError:(id *)a0;
- (long long)fetchSubtasksMasksIncludingConcealedWithError:(id *)a0;
- (long long)fetchSubtasksMasksWithError:(id *)a0;
- (BOOL)hasSubtasksWithError:(id *)a0;

@end
