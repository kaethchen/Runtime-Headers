@interface RBEventQueueEvent : NSObject

@property (retain, nonatomic) id context;
@property (nonatomic) double eventTime;
@property (copy, nonatomic) id /* block */ action;

- (id)description;
- (void).cxx_destruct;
- (long long)compare:(id)a0;

@end
