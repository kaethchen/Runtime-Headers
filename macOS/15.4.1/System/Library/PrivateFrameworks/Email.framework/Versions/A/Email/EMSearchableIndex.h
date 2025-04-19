@class NSString, EMRemoteConnection, NSObject;
@protocol OS_os_log;

@interface EMSearchableIndex : NSObject <EFLoggable>

@property (class, readonly, copy, nonatomic) NSString *protectionClass;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) EMRemoteConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;
+ (id)attachmentPersistentIDFromItemIdentifier:(id)a0;
+ (id)persistentIDForSearchableItem:(id)a0;
+ (id)richLinkItemIdentifierFromSearchableItemIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a0;
- (void)reindexSearchableItemsWithIdentifiers:(id)a0 acknowledgementHandler:(id /* block */)a1;
- (id)initWithRemoteConnection:(id)a0;
- (void)indexSummaries:(id)a0;

@end
