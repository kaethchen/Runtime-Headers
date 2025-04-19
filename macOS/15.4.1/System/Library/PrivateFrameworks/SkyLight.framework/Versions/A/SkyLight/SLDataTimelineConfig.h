@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface SLDataTimelineConfig : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) NSObject<OS_dispatch_queue> *updateBlockQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly, nonatomic) NSMutableSet *infoOptions;
@property (readonly, nonatomic) NSMutableDictionary *reportIntervals;
@property (readonly, nonatomic) NSMutableDictionary *sampleIntervals;

+ (id)configWithName:(id)a0 andUpdateBlock:(id /* block */)a1;

- (void)dealloc;
- (void)setTargetQueue:(id)a0;
- (id)createXPCObject;
- (void)addInfoOption:(id)a0;
- (id)createCancellableMachRecvSourceWithQueue:(id)a0 cancelAction:(id /* block */)a1 error:(id *)a2;
- (id)createNoSenderRecvPairWithQueue:(id)a0 errorHandler:(id /* block */)a1 eventHandler:(id /* block */)a2;
- (void)establishConnectionWithResultBlock:(id /* block */)a0;
- (id)initWithName:(id)a0 andUpdateBlock:(id /* block */)a1;
- (void)requestReportIntervalValue:(unsigned short)a0 forKey:(id)a1;
- (void)requestSampleIntervalValue:(unsigned short)a0 forKey:(id)a1;

@end
