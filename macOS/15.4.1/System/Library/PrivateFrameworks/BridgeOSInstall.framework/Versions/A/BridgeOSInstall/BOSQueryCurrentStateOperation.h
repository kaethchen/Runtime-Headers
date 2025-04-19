@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BOSQueryCurrentStateOperation : BOSOperation

@property (retain) NSObject<OS_dispatch_semaphore> *queryComplete;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (BOOL)_shouldPurge;

@end
