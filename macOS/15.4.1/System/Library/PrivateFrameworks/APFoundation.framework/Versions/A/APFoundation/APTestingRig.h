@class NSMutableDictionary, APUnfairLock;

@interface APTestingRig : NSObject

@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (retain, nonatomic) APUnfairLock *theLock;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)invokeHandlerForMessage:(id)a0 payload:(id)a1 completionHandler:(id /* block */)a2;
- (void)subscribeForDictMessage:(id)a0 handler:(id /* block */)a1;
- (void)subscribeForMessage:(id)a0 handler:(id /* block */)a1;

@end
