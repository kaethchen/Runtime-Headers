@class NSSet, NSString, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface MCFilter : MCObject <MCAnimationPathSupport> {
    NSMutableDictionary *mAttributes;
    NSMutableSet *mAnimationPaths;
}

@property (readonly) NSSet *animationPaths;
@property (readonly) unsigned long long countOfAnimationPaths;
@property (copy) NSString *filterID;
@property (copy) NSDictionary *attributes;
@property (nonatomic) unsigned long long index;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)attributeForKey:(id)a0;
- (void)setAttribute:(id)a0 forKey:(id)a1;
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
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (void)removeAllAnimationPaths;
- (void)removeAnimationPathForKey:(id)a0;

@end
