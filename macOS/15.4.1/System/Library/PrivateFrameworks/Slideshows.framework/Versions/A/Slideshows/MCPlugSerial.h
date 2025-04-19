@class NSString, NSDictionary, NSMutableDictionary, MCContainerSerializer;

@interface MCPlugSerial : MCPlug <MCTransitionTrigger> {
    NSMutableDictionary *mTransitionAttributes;
}

@property (nonatomic) unsigned long long index;
@property MCContainerSerializer *supercontainer;
@property (copy) NSString *transitionID;
@property (nonatomic) double transitionDuration;
@property (copy, nonatomic) NSDictionary *transitionAttributes;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (id)xmlElement;
- (id)imprint;
- (void)_copySelfToSnapshot:(id)a0;
- (void)addTransitionAttributes:(id)a0;
- (void)demolish;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (void)setTransitionAttribute:(id)a0 forKey:(id)a1;
- (id)transitionAttributeForKey:(id)a0;

@end
