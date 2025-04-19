@interface TSPObjectContextObserver : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;

@end
