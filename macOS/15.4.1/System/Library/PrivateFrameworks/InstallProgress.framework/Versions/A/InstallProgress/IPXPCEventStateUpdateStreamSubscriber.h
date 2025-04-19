@class NSMutableArray;
@protocol IPXPCEventStateUpdateStreamSubscriberDelegate;

@interface IPXPCEventStateUpdateStreamSubscriber : NSObject {
    NSMutableArray *_queuedMessages;
    BOOL _completedHandshake;
}

@property (readonly) unsigned long long token;
@property (weak, nonatomic) id<IPXPCEventStateUpdateStreamSubscriberDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithToken:(unsigned long long)a0;
- (void)beginHandshake;
- (void)sendOrEnqueueUpdateMessage:(id)a0;

@end
