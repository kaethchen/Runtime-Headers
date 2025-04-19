@class NSMutableDictionary;

@interface MPAnimationManager : NSObject {
    NSMutableDictionary *mAnimations;
    NSMutableDictionary *mAnimationSets;
}

+ (id)sharedManager;
+ (void)loadAnimationManagerWithPaths:(id)a0;
+ (void)releaseSharedManager;

- (void)dealloc;
- (id)initWithPaths:(id)a0;
- (id)animationDescriptionForAnimationID:(id)a0;
- (id)animationDescriptionForAnimationSetID:(id)a0;

@end
