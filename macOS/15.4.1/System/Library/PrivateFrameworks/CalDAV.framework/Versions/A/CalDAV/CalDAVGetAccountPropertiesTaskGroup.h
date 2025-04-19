@class NSURL, NSSet, CalDAVServerVersion;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup

@property (retain, nonatomic) NSURL *delegatePrincipalURL;
@property (retain, nonatomic) NSURL *homeURL;
@property (readonly, nonatomic) NSSet *calendarHomes;
@property (readonly, nonatomic) NSSet *preferredUserAddresses;
@property (readonly, nonatomic) NSURL *inboxURL;
@property (readonly, nonatomic) NSURL *outboxURL;
@property (readonly, nonatomic) NSURL *dropboxURL;
@property (readonly, nonatomic) NSURL *notificationURL;
@property (readonly, nonatomic) NSURL *updatedPrincipalURL;
@property (readonly, nonatomic) CalDAVServerVersion *serverVersion;
@property (readonly, nonatomic) BOOL supportsCalendarUserSearch;

- (id)description;
- (void).cxx_destruct;
- (id)homeSet;
- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)a0;
- (BOOL)forceOptionsRequest;
- (void)processPrincipalHeaders:(id)a0;
- (void)startTaskGroup;
- (id)userAddresses;

@end
