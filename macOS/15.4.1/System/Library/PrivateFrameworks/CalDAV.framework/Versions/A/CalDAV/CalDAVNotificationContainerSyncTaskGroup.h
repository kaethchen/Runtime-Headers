@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup

@property (retain, nonatomic) NSSet *notificationTypeNamesToFetch;

- (void).cxx_destruct;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)copyGetTaskWithURL:(id)a0;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 accountInfoProvider:(id)a3 taskManager:(id)a4;
- (BOOL)shouldFetchResourceWithEtag:(id)a0 propertiesToValues:(id)a1;

@end
