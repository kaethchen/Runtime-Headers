@class NSString, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface CKDAuthorizationObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) CKDAuthorizationObserver *defaultObserver;

@property (readonly, copy) NSString *identifier;
@property (copy) NSSet *services;
@property (copy) NSSet *bundleIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithIdentifier:(id)a0;
- (void)registerWithBlock:(id /* block */)a0;
- (void)_handleTCCAuthorizationEventWithType:(unsigned long long)a0 record:(id)a1 block:(id /* block */)a2;

@end
