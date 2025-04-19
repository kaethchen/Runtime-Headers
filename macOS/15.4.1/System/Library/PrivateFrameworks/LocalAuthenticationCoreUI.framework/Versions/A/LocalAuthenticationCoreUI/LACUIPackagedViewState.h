@class NSString, NSMutableArray, LACUIPackagedViewStateAnimationOptions;

@interface LACUIPackagedViewState : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *substates;
@property (retain, nonatomic) LACUIPackagedViewStateAnimationOptions *animationOptions;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)addSubstate:(id)a0;
- (BOOL)containsStateNamed:(id)a0;
- (BOOL)finishesWithStateNamed:(id)a0;
- (id)initWithName:(id)a0 animationOptions:(id)a1;

@end
