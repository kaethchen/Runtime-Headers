@interface MailUI.MUILastSeenBucketHelper : NSObject <MUIBucketsViewControllerSession, EMMailboxCategoryCloudStorageObserver, EMMessageRepositoryCountQueryObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultDate;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ mailboxes;
    void /* unknown type, empty encoding */ externalMailboxURLs;
    void /* unknown type, empty encoding */ countQueryTokens;
    void /* unknown type, empty encoding */ countQueries;
    void /* unknown type, empty encoding */ lastSeenDatesByBucket;
    void /* unknown type, empty encoding */ sessionLastSeenDatesByBucket;
    void /* unknown type, empty encoding */ lastSelectedDateByBucket;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)clearSessionState;
- (void)categoryCloudStorage:(id)a0 didChangeLastSeenDate:(id)a1 lastSeenDisplayDate:(id)a2 forCategoryType:(id)a3 inMailboxWithExternalURL:(id)a4 originator:(unsigned long long)a5;
- (void)messageRepository:(id)a0 query:(id)a1 countDidChange:(long long)a2;
- (id)lastSeenDatesForBucket:(long long)a0;
- (void)setlastSeenDates:(id)a0 forBucket:(long long)a1;
- (void)updateLastSeenDates:(id)a0 forMailboxes:(id)a1 bucket:(long long)a2;
- (void)updateWithMailboxes:(id)a0;

@end
