@class MCContainer, NSSet, NSDictionary, NSMutableSet, NSMutableDictionary;

@interface MCPlug : MCObject <MCActionSupport, MCAnimationPathSupport, MCPlugTiming> {
    unsigned int mFlags;
    NSMutableSet *mAnimationPaths;
    NSMutableDictionary *mActions;
}

@property (readonly) NSSet *animationPaths;
@property (readonly) unsigned long long countOfAnimationPaths;
@property (readonly) NSDictionary *actions;
@property (readonly, nonatomic) unsigned long long countOfActions;
@property (retain) MCContainer *container;
@property (nonatomic) BOOL startsPaused;
@property (nonatomic) BOOL preactivatesWithParent;
@property (nonatomic) double phaseInDuration;
@property (nonatomic) double loopDuration;
@property (nonatomic) double phaseOutDuration;
@property (readonly, nonatomic) double fullDuration;
@property (nonatomic) double numberOfLoops;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeAllActions;
- (id)actionForKey:(id)a0;
- (id)xmlElement;
- (id)imprint;
- (void)removeActionForKey:(id)a0;
- (void)setAction:(id)a0 forKey:(id)a1;
- (void)demolishActions;
- (void)initAnimationPathsWithImprints:(id)a0;
- (void)_copySelfToSnapshot:(id)a0;
- (void)addActionsToXMLElement:(id)a0;
- (void)addAnimationPath:(id)a0;
- (void)addAnimationPathsToXMLElement:(id)a0;
- (id)animationPathForKey:(id)a0;
- (void)demolish;
- (void)demolishAnimationPaths;
- (id)imprintsForActions;
- (id)imprintsForAnimationPaths;
- (void)initActionsWithImprints:(id)a0;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (void)removeAllAnimationPaths;
- (void)removeAnimationPathForKey:(id)a0;

@end
