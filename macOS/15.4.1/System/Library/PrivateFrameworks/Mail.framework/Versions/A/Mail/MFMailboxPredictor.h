@class NSString, EDCachingMailboxPredictor;
@protocol EFScheduler;

@interface MFMailboxPredictor : NSObject <EDMessageChangeHookResponder>

@property (retain, nonatomic) EDCachingMailboxPredictor *cachingPredictor;
@property (retain, nonatomic) id<EFScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPredictor;

@end
