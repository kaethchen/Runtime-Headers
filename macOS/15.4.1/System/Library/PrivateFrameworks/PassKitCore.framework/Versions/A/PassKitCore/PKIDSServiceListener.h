@class NSObject;
@protocol OS_dispatch_queue;

@interface PKIDSServiceListener : NSObject

@property (readonly, copy, nonatomic) id /* block */ onMessageReceived;
@property (readonly, weak, nonatomic) id referenceObject;
@property (nonatomic) NSObject<OS_dispatch_queue> *replyQueue;

- (void).cxx_destruct;
- (id)initWithReferenceObject:(id)a0 onMessageReceived:(id /* block */)a1;

@end
