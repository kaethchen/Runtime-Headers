@class NSString;

@interface IMCloudKitSyncStatistics : NSObject {
    void /* unknown type, empty encoding */ statistics;
}

@property (nonatomic, readonly) long long syncedChatCount;
@property (nonatomic, readonly) long long totalChatCount;
@property (nonatomic, readonly) long long unresolvedChatCount;
@property (nonatomic, readonly) long long serverChatTotalCount;
@property (nonatomic, readonly) long long serverChatLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableChatCount;
@property (nonatomic, readonly) long long syncStoreWrittenChatCount;
@property (nonatomic, readonly) long long syncedMessageCount;
@property (nonatomic, readonly) long long totalMessageCount;
@property (nonatomic, readonly) long long unresolvedMessageCount;
@property (nonatomic, readonly) long long serverMessageTotalCount;
@property (nonatomic, readonly) long long serverMessageLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableMessageCount;
@property (nonatomic, readonly) long long syncStoreWrittenMessageCount;
@property (nonatomic, readonly) long long syncedAttachmentCount;
@property (nonatomic, readonly) long long totalAttachmentCount;
@property (nonatomic, readonly) long long unresolvedAttachmentCount;
@property (nonatomic, readonly) long long serverAttachmentTotalCount;
@property (nonatomic, readonly) long long serverAttachmentLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableAttachmentCount;
@property (nonatomic, readonly) long long syncStoreWrittenAttachmentCount;
@property (nonatomic, readonly) long long serverMessageUpdateTotalCount;
@property (nonatomic, readonly) long long serverMessageUpdateLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableMessageUpdateCount;
@property (nonatomic, readonly) long long syncStoreWrittenMessageUpdateCount;
@property (nonatomic, readonly) long long serverRecoverableMessageTotalCount;
@property (nonatomic, readonly) long long serverRecoverableMessageLiveCount;
@property (nonatomic, readonly) long long syncStoreWritableRecoverableMessageCount;
@property (nonatomic, readonly) long long syncStoreWrittenRecoverableMessageCount;
@property (nonatomic, readonly) long long syncedRecordCount;
@property (nonatomic, readonly) long long totalRecordCount;
@property (nonatomic, readonly) long long unresolvedRecordCount;
@property (nonatomic, readonly) double percentSynced;
@property (nonatomic, readonly) long long remainingMessagesCount;
@property (nonatomic, readonly) NSString *description;

+ (id)_createSyncStatisticsDictionary:(long long)a0 messageSyncCount:(long long)a1 messageUnresolvedCount:(long long)a2 chatCount:(long long)a3 chatSyncCount:(long long)a4 chatUnresolvedCount:(long long)a5 attachmentCount:(long long)a6 attachmentSyncCount:(long long)a7 attachmentUnresolvedCount:(long long)a8 serverRecordCounts:(id)a9 syncStoreCounts:(id)a10;
+ (id)_createSyncStatisticsDictionaryForSyncControllerSyncState:(unsigned long long)a0 syncType:(long long)a1 count:(double)a2 max:(double)a3 unresolved:(double)a4;
+ (double)calculatePercentageOfTotal:(double)a0 count:(double)a1;
+ (id)percentStringFromDouble:(double)a0;
+ (id)percentStringFromTotal:(double)a0 count:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_syncStatisticsDictionary;
- (id)initWithStatisticsDictionary:(id)a0;

@end
