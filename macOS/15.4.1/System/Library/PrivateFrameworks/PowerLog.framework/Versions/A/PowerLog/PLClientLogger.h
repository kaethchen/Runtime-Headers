@class NSString, NSMutableDictionary, NSSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface PLClientLogger : NSObject

@property BOOL clientDebug;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSObject<OS_dispatch_queue> *batchFlushQueue;
@property (retain) NSString *processName;
@property (retain) NSMutableDictionary *permissionCache;
@property (retain) NSMutableDictionary *pendingTaskCache;
@property (retain) NSMutableArray *batchedTaskCache;
@property (retain) NSMutableDictionary *dynamicCache;
@property (retain) NSMutableDictionary *eventFilterSaved;
@property (retain) NSObject<OS_dispatch_queue> *xpcConnectionQueue;
@property (retain) NSObject<OS_dispatch_queue> *xpcConnectionHelperQueue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnectionHelper;
@property BOOL talkToPowerlogHelper;
@property BOOL batchedTimerInFlight;
@property BOOL forceBatching;
@property BOOL batchDropMessages;
@property int batchMessagesSentCount;
@property (readonly) NSSet *batchingClientAllowlist;
@property (readonly) NSSet *curatedBatchingList;
@property (readonly) NSSet *batchingKeysAllowlist;
@property int batchedDropMessageCount;
@property (retain) NSObject<OS_dispatch_queue> *adaptivePermissionWorkQueue;

+ (id)sharedInstance;
+ (BOOL)isMessageOnDeviceDisabled;

- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (int)shouldLogNowForClientID:(short)a0 withKey:(id)a1 withPayload:(id)a2 withFilterInterval:(double)a3;
- (void)addToBatchedTaskCacheForType:(id)a0 forClientID:(short)a1 forKey:(id)a2 withPayload:(id)a3;
- (void)addToPendingTaskCacheForType:(id)a0 forClientID:(short)a1 forKey:(id)a2 withPayload:(id)a3;
- (int)batchSizeForClientID:(short)a0;
- (void)batchTasksCacheFlush;
- (short)blockedPermissionForClientID:(short)a0 withKey:(id)a1 withType:(id)a2 withTimeout:(unsigned long long)a3;
- (id)buildMessageForClientID:(short)a0 withKey:(id)a1 withPayload:(id)a2;
- (id)cacheForKey:(id)a0;
- (short)cachedPermissionForClientID:(short)a0 withKey:(id)a1 withType:(id)a2;
- (void)clearBatchedTaskCache;
- (void)clearBatchedTaskCachePPS;
- (id)getWorkQueueForClientID:(short)a0;
- (void)logForClientID:(short)a0 withKey:(id)a1 withPayload:(id)a2;
- (void)logLaterForClientID:(short)a0 withKey:(id)a1 withFilterInterval:(double)a2;
- (void)logStateCaches;
- (void)logWithCurrentDateForClientID:(short)a0 withKey:(id)a1 withPayload:(id)a2;
- (id)pendingTasksForType:(id)a0 forClientID:(short)a1 forKey:(id)a2;
- (void)permissionForClientID:(short)a0 withKey:(id)a1 withType:(id)a2 completion:(id /* block */)a3;
- (void)powerlogStateChanged;
- (id)queryForClientID:(short)a0 withKey:(id)a1 withPayload:(id)a2;
- (void)sendBatchToPPS;
- (void)setCachePermission:(short)a0 ForClientID:(short)a1 withKey:(id)a2 withType:(id)a3;
- (id)xpcConnectionWithClientID:(short)a0 withKey:(id)a1 withPayload:(id)a2;
- (void)xpcSendMessage:(id)a0 withClientID:(short)a1 withKey:(id)a2 withPayload:(id)a3;
- (void)xpcSendMessageWithRateLimitingforClient:(short)a0 withKey:(id)a1 withPayload:(id)a2;
- (id)xpcSendMessageWithReply:(id)a0 withClientID:(short)a1 withKey:(id)a2 withPayload:(id)a3;

@end
