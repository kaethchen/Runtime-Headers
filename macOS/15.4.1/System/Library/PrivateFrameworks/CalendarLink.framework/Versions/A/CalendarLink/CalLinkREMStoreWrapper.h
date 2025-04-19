@class REMStore;

@interface CalLinkREMStoreWrapper : NSObject {
    REMStore *_reminderStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)fetchReminderDataForReminderURLs:(id)a0 error:(id *)a1;

@end
