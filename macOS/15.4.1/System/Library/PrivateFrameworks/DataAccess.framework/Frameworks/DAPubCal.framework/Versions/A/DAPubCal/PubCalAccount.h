@class NSString, NSURL;
@protocol DAValidityCheckConsumer;

@interface PubCalAccount : DAAccount <DAPubCalAccount> {
    id<DAValidityCheckConsumer> _validationConsumer;
}

@property (copy, nonatomic) NSString *publishedCalendarUUID;
@property (copy, nonatomic) NSString *publishedCalendarName;
@property (readonly, nonatomic) NSURL *publishURL;
@property (nonatomic) BOOL automaticallyPublishChanges;
@property (nonatomic) BOOL filterTitleAndNotes;
@property (nonatomic) BOOL filterAttachments;
@property (nonatomic) BOOL filterAlarms;
@property (nonatomic) BOOL filterAttendees;
@property (copy, nonatomic) NSURL *principalURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)redactedDescription;
- (id)fileName;
- (BOOL)isDisabled;
- (BOOL)isEqualToAccount:(id)a0;
- (id)localizedInvalidPasswordMessage;
- (void)discoverInitialPropertiesWithConsumer:(id)a0;
- (id)localizedIdenticalAccountFailureMessage;
- (id)onBehalfOfBundleIdentifier;
- (BOOL)shouldRemoveDBSyncDataOnAccountChange;
- (void)_validityCheckFinishedWithSuccess:(BOOL)a0 error:(id)a1;
- (void)calendarPublishToURL:(id)a0 failedWithError:(id)a1;
- (void)calendarPublishedToURL:(id)a0;

@end
