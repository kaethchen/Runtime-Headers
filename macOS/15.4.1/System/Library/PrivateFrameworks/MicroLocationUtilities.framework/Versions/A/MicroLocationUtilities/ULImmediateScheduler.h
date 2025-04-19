@class NSString;

@interface ULImmediateScheduler : NSObject <ULScheduler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performAsyncBlock:(id /* block */)a0;
- (void)performSyncBlock:(id /* block */)a0;

@end
