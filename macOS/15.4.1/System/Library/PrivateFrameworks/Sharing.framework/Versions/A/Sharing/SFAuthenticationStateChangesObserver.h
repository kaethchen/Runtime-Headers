@class NSUUID, NSObject;
@protocol OS_dispatch_queue;

@interface SFAuthenticationStateChangesObserver : NSObject <SFAuthenticationStateChangesObserverProtocol>

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id /* block */ observer;

- (void).cxx_destruct;
- (id)initWithObserver:(id /* block */)a0 queue:(id)a1;
- (void)stateDidChange;

@end
