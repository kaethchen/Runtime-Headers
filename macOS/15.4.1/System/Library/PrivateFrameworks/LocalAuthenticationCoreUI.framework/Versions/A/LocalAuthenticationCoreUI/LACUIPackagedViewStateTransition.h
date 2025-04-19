@class LACUIPackagedViewState;

@interface LACUIPackagedViewStateTransition : NSObject {
    id /* block */ _handler;
}

@property (readonly, nonatomic) LACUIPackagedViewState *fromState;
@property (readonly, nonatomic) LACUIPackagedViewState *toState;

- (void)dealloc;
- (void).cxx_destruct;
- (void)complete:(BOOL)a0;
- (id)initWithFromState:(id)a0 toState:(id)a1 completion:(id /* block */)a2;

@end
