@class NSMutableArray, NSDictionary, MFEWSConnection, MFEWSAccount, NSObject, NSOperationQueue;
@protocol OS_os_log, EFScheduler;

@interface MFEWSGateway : NSObject <NSSecureCoding> {
    NSMutableArray *_offlineRequests;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *operationActivityLog;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MFEWSConnection *connection;
@property (copy, nonatomic) NSDictionary *savedOfflineToRealEWSIdStrings;
@property (readonly, nonatomic) id<EFScheduler> commitScheduler;
@property (readonly, weak, nonatomic) MFEWSAccount *account;
@property (readonly, nonatomic) NSOperationQueue *requestResponseQueue;
@property (readonly, nonatomic) unsigned long long maxRequestsToSend;

+ (id)keyPathsForValuesAffectingRequestResponseQueue;
+ (id)newTemporaryItemId;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccount:(id)a0;
- (void)addRequest:(id)a0;
- (void)addResponse:(id)a0;
- (void)_chunkItemsToSend:(id)a0 applyToBlock:(id /* block */)a1;
- (void)_addCreateRequestToOfflineCache:(id)a0;
- (void)_addDeleteRequestToOfflineCache:(id)a0;
- (id)_offlineCachePath;
- (id)_offlineCachePathForDataWithItemIdString:(id)a0;
- (id)_offlineCachePathForMessageWithItemIdString:(id)a0;
- (void)_saveData:(id)a0 forMessage:(id)a1 isPartial:(BOOL)a2 updateMetadata:(BOOL)a3;
- (void)_saveOfflineCache;
- (void)addError:(id)a0 withHandler:(id)a1;
- (void)addOfflineToRealEWSIdStrings:(id)a0 forRequest:(id)a1;
- (id)appendMessage:(id)a0 withData:(id)a1 toEWSFolderWithIdString:(id)a2 messageType:(char)a3 flags:(long long)a4 sender:(id)a5 recipientsByHeaderKey:(id)a6 send:(BOOL)a7 errorHandler:(id)a8;
- (id)copyMessagesWithEWSItemIds:(id)a0 fromFolderWithIdString:(id)a1 toFolderWithIdString:(id)a2 errorHandler:(id)a3;
- (id)createMailboxWithParentEWSFolderIdString:(id)a0 name:(id)a1 mailboxType:(int)a2 error:(id *)a3;
- (BOOL)deleteMailboxWithEWSFolderIdString:(id)a0 error:(id *)a1;
- (void)deleteMessagesWithEWSItemIds:(id)a0 fromFolderWithEWSIdString:(id)a1 synchronously:(BOOL)a2;
- (id)fetchDistinguishedFolderIdsWithConnection:(id)a0;
- (id)fetchMimeDataForMessage:(id)a0 errorHandler:(id)a1;
- (BOOL)fetchUsageInfo:(struct { long long x0; unsigned long long x1; } *)a0 forEWSFolderIdString:(id)a1;
- (void)getOofSettings;
- (BOOL)moveMailboxWithEWSFolderIdString:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)playbackRequestsFromOfflineCacheWithConnection:(id)a0 error:(id *)a1;
- (void)removeMessageAndDataFromOfflineCacheForEWSItemIdString:(id)a0;
- (BOOL)renameMailboxWithEWSFolderIdString:(id)a0 to:(id)a1 error:(id *)a2;
- (id)resolvedIdStringForIdString:(id)a0;
- (void)retrieveMessageFromOfflineCache:(id *)a0 data:(id *)a1 forItemIdString:(id)a2;
- (void)saveRequestToOfflineCache:(id)a0;
- (void)sendMessage:(id)a0 forRequest:(id)a1;
- (void)sendResponseType:(char)a0 forMeetingMessage:(id)a1 inStore:(id)a2 errorHandler:(id)a3;
- (void)setOofState:(long long)a0 internalReply:(id)a1 externalReply:(id)a2 startTime:(id)a3 endTime:(id)a4 externalAudienceType:(long long)a5;
- (void)takeRequestOffline:(id)a0 error:(id)a1;
- (void)undeleteMessageForFailedCreateEventResponse:(id)a0;
- (BOOL)writeMessageToOfflineCache:(id)a0 data:(id)a1 forItemIdString:(id)a2;

@end
