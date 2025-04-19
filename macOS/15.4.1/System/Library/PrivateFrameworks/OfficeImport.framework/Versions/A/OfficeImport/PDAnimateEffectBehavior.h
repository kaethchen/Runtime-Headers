@class NSMutableDictionary;

@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    BOOL mHasTransition;
    int mTransition;
}

@property (retain, nonatomic) NSMutableDictionary *propertyMap;

- (id)init;
- (void).cxx_destruct;
- (int)transition;
- (BOOL)hasTransition;
- (void)setTransition:(int)a0;
- (BOOL)hasProperties;

@end
