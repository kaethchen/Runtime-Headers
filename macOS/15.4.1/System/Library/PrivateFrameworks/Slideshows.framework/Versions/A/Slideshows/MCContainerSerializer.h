@class NSSet, NSArray, NSString, NSDictionary, NSMutableSet;

@interface MCContainerSerializer : MCContainer {
    NSMutableSet *mPlugs;
    NSArray *mCachedOrderedPlugs;
    double mCachedDuration;
}

@property (readonly) NSSet *plugs;
@property (readonly, nonatomic) unsigned long long countOfPlugs;
@property (readonly) NSArray *orderedPlugs;
@property (readonly) double duration;
@property (copy) NSString *initialTransitionID;
@property (nonatomic) double initialTransitionDuration;
@property (copy) NSDictionary *initialTransitionAttributes;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)xmlElement;
- (id)imprint;
- (id)insertPlugForContainer:(id)a0 atIndex:(unsigned long long)a1;
- (id)addPlugForContainer:(id)a0;
- (id)addPlugsForContainers:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (id)insertPlugsForContainers:(id)a0 atIndex:(unsigned long long)a1;
- (void)movePlugsAtIndices:(id)a0 toIndex:(unsigned long long)a1;
- (id)plugAtIndex:(unsigned long long)a0;
- (void)removeAllPlugs;
- (void)removePlugsAtIndices:(id)a0;
- (double)timeInForPlug:(id)a0;

@end
