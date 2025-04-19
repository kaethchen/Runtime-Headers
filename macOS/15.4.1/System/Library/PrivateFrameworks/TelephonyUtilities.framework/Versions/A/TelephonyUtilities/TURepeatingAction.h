@interface TURepeatingAction : NSObject

@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) unsigned long long remainingIterations;
@property (nonatomic) double pauseDuration;

- (void).cxx_destruct;
- (id)initWithAction:(id /* block */)a0;

@end
