@interface COStatusBar : NSObject

@property (copy, nonatomic) id /* block */ terminationNotifyCallback;
@property (copy, nonatomic) id /* block */ terminationBeganCallback;

- (void).cxx_destruct;
- (id)initWithConditionClass:(id)a0 profile:(id)a1 teardownBeganCb:(id /* block */)a2 teardownCompleteCb:(id /* block */)a3;

@end
