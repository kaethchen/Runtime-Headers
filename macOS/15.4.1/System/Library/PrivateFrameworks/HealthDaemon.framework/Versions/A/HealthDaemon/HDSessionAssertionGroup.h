@class NSMutableSet, NSMutableDictionary;

@interface HDSessionAssertionGroup : NSObject {
    NSMutableSet *_allAssertions;
    NSMutableDictionary *_assertionsForState;
}

@property (readonly, nonatomic) long long state;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)transitionToState:(long long)a0;
- (void)setupState:(long long)a0 withAssertions:(id)a1;

@end
