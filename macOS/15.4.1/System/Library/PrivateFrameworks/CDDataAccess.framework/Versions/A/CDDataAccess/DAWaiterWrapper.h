@protocol DADataclassLockWatcher;

@interface DAWaiterWrapper : NSObject

@property (retain, nonatomic) id<DADataclassLockWatcher> waiter;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) long long dataclasses;
@property (readonly, nonatomic) int waiterNum;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
