@class NSSet, NSArray, NSMutableDictionary;

@interface MCContainerParallelizer : MCContainer {
    NSMutableDictionary *mPlugs;
    NSArray *mCachedZOrderedPlugs;
    struct CGColor { } *mBackgroundColor;
}

@property (readonly) NSSet *plugs;
@property (readonly, nonatomic) unsigned long long countOfPlugs;
@property (readonly) NSArray *zOrderedPlugs;
@property struct CGColor { } *backgroundColor;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)xmlElement;
- (id)imprint;
- (void)changeIDOfPlug:(id)a0 toID:(id)a1;
- (void)demolish;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (id)plugForID:(id)a0;
- (void)removeAllPlugs;
- (void)removePlug:(id)a0;
- (void)removePlugForID:(id)a0;
- (void)setBackgroundColorRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)setPlugForContainer:(id)a0 forID:(id)a1;
- (id)setPlugProxyForPlug:(id)a0;

@end
