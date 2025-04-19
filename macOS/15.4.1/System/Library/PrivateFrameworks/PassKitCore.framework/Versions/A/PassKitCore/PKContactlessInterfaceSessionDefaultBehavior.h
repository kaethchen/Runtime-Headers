@class NSString;

@interface PKContactlessInterfaceSessionDefaultBehavior : NSObject <PKContactlessInterfaceSessionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attachDefaultBehaviorToSession:(id)a0;

- (void)_processContexts:(id)a0 didFinishTransaction:(BOOL)a1;
- (void)contactlessInterfaceSession:(id)a0 didEndPersistentCardEmulationWithContexts:(id)a1;
- (void)contactlessInterfaceSession:(id)a0 didFinishTransactionWithContext:(id)a1;

@end
