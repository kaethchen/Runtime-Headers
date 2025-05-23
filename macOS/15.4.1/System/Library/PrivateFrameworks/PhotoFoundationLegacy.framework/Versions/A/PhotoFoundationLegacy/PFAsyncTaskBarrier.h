@class NSArray, NSString, NSCondition;

@interface PFAsyncTaskBarrier : NSObject

@property (readonly) NSCondition *conditionLock;
@property (retain) NSArray *errors;
@property (readonly) NSString *label;
@property (readonly) long long remainingTaskCount;
@property (readonly, copy) id /* block */ completionBlock;

- (id)description;
- (void).cxx_destruct;
- (void)waitUntilCompleted;
- (void)taskCompleted;
- (void)taskCompletedWithCriticalBlock:(id /* block */)a0;
- (void)changeRemainingTaskCount:(long long)a0;
- (void)executeCriticalBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 taskCount:(long long)a1;
- (id)initWithLabel:(id)a0 taskCount:(long long)a1 completionBlock:(id /* block */)a2;
- (void)setRemainingTaskCount:(long long)a0;
- (void)taskCompletedWithError:(id)a0;
- (void)taskCompletedWithError:(id)a0 criticalBlock:(id /* block */)a1;
- (void)taskCompletedWithErrors:(id)a0;
- (void)taskCompletedWithErrors:(id)a0 criticalBlock:(id /* block */)a1;
- (void)waitUntilCompletedOrError;

@end
