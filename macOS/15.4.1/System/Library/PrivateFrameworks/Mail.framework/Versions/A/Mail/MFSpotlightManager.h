@class NSString, NSConditionLock, NSMutableSet, NSMutableDictionary, MCInvocationQueue;

@interface MFSpotlightManager : NSObject <MCActivityTarget> {
    NSConditionLock *_attachmentIndexingLock;
    NSMutableSet *_messsagesScheduledForAttachmentIndexing;
    NSMutableDictionary *_queryObserverDictionary;
}

@property (readonly, nonatomic) MCInvocationQueue *indexQueue;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_log;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_indexAttachmentsForScheduledMessages;
- (void)_synchronouslyIndexAttachmentsForMessages:(id)a0 messageCount:(unsigned long long)a1;
- (void)_triggerDelayedAttachmentIndexing;
- (void)_triggerNowAttachmentIndexing;
- (id)acquireQueryObserver:(long long)a0;
- (void)immediatelyWriteAttachmentsForMessage:(id)a0;
- (void)indexAttachmentsForMessage:(id)a0;
- (BOOL)isSpotlightEnabled;
- (long long)registerQueryObserver:(id)a0;
- (void)test_cancelAllSpotlightIndexingOperations;
- (void)test_waitForSpotlightIndexingOperationsToFinish;
- (void)unregisterQueryObserver:(long long)a0;

@end
