@class NSString, BGSystemTask;

@interface HMDBackgroundSystemTask : NSObject <HMDBackgroundSystemTask>

@property (readonly, nonatomic) BGSystemTask *underlyingTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setTaskCompleted;
- (id)initWithUnderlyingTask:(id)a0;

@end
