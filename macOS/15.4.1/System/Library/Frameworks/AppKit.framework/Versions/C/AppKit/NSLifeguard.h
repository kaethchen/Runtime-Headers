@class NSCountedSet;

@interface NSLifeguard : NSObject

@property (class, readonly) NSLifeguard *currentLifeguard;
@property (class, readonly, getter=_isTestable) BOOL _testable;
@property (class, readonly, getter=isOnDuty) BOOL onDuty;

@property (readonly, copy) NSCountedSet *proxyCounts;
@property (getter=isBusy) BOOL busy;

+ (long long)_currentLimit;
+ (void)beginWatch;

- (void)dealloc;
- (id)init;
- (id)_canonicalIdentifierForReceiver:(id)a0 context:(id)a1;
- (void)_forgetProxyWithIdentifier:(id)a0;
- (void)addProxyForReceiver:(id)a0 context:(id)a1;

@end
