@class CATState;

@interface CATTransition : NSObject

@property (readonly, weak, nonatomic) CATState *state;
@property (readonly, nonatomic) SEL action;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithState:(id)a0 action:(SEL)a1;

@end
