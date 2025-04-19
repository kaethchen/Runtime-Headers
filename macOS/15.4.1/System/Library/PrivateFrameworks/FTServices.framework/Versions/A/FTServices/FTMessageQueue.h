@class NSArray, IDSBaseMessage, CUTDeferredTaskQueue, NSMutableArray;
@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : NSObject {
    CUTDeferredTaskQueue *_timeoutTask;
}

@property (retain) NSMutableArray *_queue;
@property (retain) NSMutableArray *_addDates;
@property (retain) IDSBaseMessage *currentMessage;
@property (readonly) IDSBaseMessage *topMessage;
@property (readonly) long long count;
@property (readonly) NSArray *messages;
@property (weak) id<FTMessageQueueDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)addMessage:(id)a0;
- (void)_clearTimeout;
- (void)_setTimeout;
- (void)_timeoutHit;
- (BOOL)addMessageAtHeadOfQueue:(id)a0;
- (id)dequeueTopMessage;
- (id)messageForUniqueID:(unsigned long long)a0;
- (void)removeAllMessages;
- (BOOL)removeMessage:(id)a0;

@end
