@class NSSet, NSString, NSMutableSet;

@interface MCAnimationPathCombo : MCAnimationPath <MCAnimationPathSupport> {
    NSMutableSet *mAnimationPaths;
}

@property (readonly) NSSet *animationPaths;
@property (readonly) unsigned long long countOfAnimationPaths;
@property (copy) NSString *combineOperation;

- (id)xmlElement;
- (id)imprint;
- (void)initAnimationPathsWithImprints:(id)a0;
- (void)_copySelfToSnapshot:(id)a0;
- (void)addAnimationPath:(id)a0;
- (void)addAnimationPathsToXMLElement:(id)a0;
- (id)animationPathForKey:(id)a0;
- (void)demolish;
- (void)demolishAnimationPaths;
- (id)imprintsForAnimationPaths;
- (id)initWithImprint:(id)a0;
- (void)removeAllAnimationPaths;
- (void)removeAnimationPathForKey:(id)a0;

@end
