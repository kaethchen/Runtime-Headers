@class NSString, ULFuture;

@interface ULPromise : NSObject <ULCancelable>

@property (readonly) ULFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promise;

- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
