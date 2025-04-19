@class NSString, NSArray, NSDate;
@protocol TRILaunchdInterface, TRITaskQueueStateProviding;

@interface TRIPublishLowLevelFactorsTask : TRIBaseTask <TRITask> {
    id<TRILaunchdInterface> _launchdConnection;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseFromData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (id)initWithLaunchdConnection:(id)a0;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;

@end
