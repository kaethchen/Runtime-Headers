@class NSString, NSObject;
@protocol OS_dispatch_queue, SCDANotifyObserverDelegate;

@interface SCDANotifyObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _options;
    id<SCDANotifyObserverDelegate> _delegate;
    int _registrationToken;
    struct _flags { unsigned char delegateRespondsToDidReceiveNotificationWithToken : 1; unsigned char delegateRespondsToDidChangeStateFromTo : 1; } _flags;
    unsigned long long _state;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long state;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)getStateWithCompletion:(id /* block */)a0;
- (id)initWithName:(id)a0 options:(unsigned long long)a1 queue:(id)a2 delegate:(id)a3;
- (void)_handleNotificationWithToken:(int)a0;
- (void)_updateStateWithToken:(int)a0;

@end
