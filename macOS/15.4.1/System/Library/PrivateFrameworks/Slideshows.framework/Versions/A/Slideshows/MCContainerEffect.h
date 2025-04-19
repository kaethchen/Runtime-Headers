@class NSSet, NSDictionary, NSArray, NSString, NSMutableArray, NSMutableDictionary;

@interface MCContainerEffect : MCContainer <MCActionSupport> {
    NSMutableArray *mSlides;
    NSMutableArray *mTexts;
    NSMutableDictionary *mActions;
    NSMutableDictionary *mEffectAttributes;
}

@property (readonly) NSDictionary *actions;
@property (readonly, nonatomic) unsigned long long countOfActions;
@property (readonly) NSSet *slides;
@property (readonly) NSArray *orderedSlides;
@property (readonly, nonatomic) unsigned long long countOfSlides;
@property (readonly, nonatomic) unsigned long long nextAvailableSlideIndex;
@property (readonly) NSSet *texts;
@property (readonly) NSArray *orderedTexts;
@property (readonly, nonatomic) unsigned long long countOfTexts;
@property (readonly, nonatomic) unsigned long long nextAvailableTextIndex;
@property (copy) NSString *effectID;
@property (copy) NSDictionary *effectAttributes;
@property (nonatomic) BOOL isLive;

+ (id)keyPathsForValuesAffectingValueForKey:(id)a0;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeAllActions;
- (id)textAtIndex:(unsigned long long)a0;
- (id)actionForKey:(id)a0;
- (id)xmlElement;
- (id)imprint;
- (id)slideAtIndex:(unsigned long long)a0;
- (void)removeActionForKey:(id)a0;
- (void)setAction:(id)a0 forKey:(id)a1;
- (void)demolishActions;
- (void)removeAllSlides;
- (void)addActionsToXMLElement:(id)a0;
- (void)addEffectAttributes:(id)a0;
- (id)addSlide;
- (id)addSlideForAsset:(id)a0;
- (id)addSlideForContainer:(id)a0;
- (id)addSlides:(long long)a0;
- (id)addSlidesForAssets:(id)a0;
- (id)addTextForAsset:(id)a0 andKey:(id)a1;
- (id)addTextForAttributedString:(id)a0;
- (id)addTextsForAssets:(id)a0 andKey:(id)a1;
- (id)addTextsForAttributedStrings:(id)a0;
- (void)demolish;
- (id)effectAttributeForKey:(id)a0;
- (id)imprintsForActions;
- (void)initActionsWithImprints:(id)a0;
- (id)initWithImprint:(id)a0 andMontage:(id)a1;
- (id)insertSlideAtIndex:(long long)a0;
- (id)insertSlideForAsset:(id)a0 atIndex:(unsigned long long)a1;
- (id)insertSlideForContainer:(id)a0 atIndex:(unsigned long long)a1;
- (id)insertSlidesForAssets:(id)a0 atIndex:(unsigned long long)a1;
- (id)insertTextForAsset:(id)a0 andKey:(id)a1 atIndex:(unsigned long long)a2;
- (id)insertTextForAttributedString:(id)a0 atIndex:(unsigned long long)a1;
- (id)insertTextsForAssets:(id)a0 andKey:(id)a1 atIndex:(unsigned long long)a2;
- (id)insertTextsForAttributedStrings:(id)a0 atIndex:(unsigned long long)a1;
- (void)moveSlidesAtIndices:(id)a0 toIndex:(unsigned long long)a1;
- (void)moveTextsAtIndices:(id)a0 toIndex:(unsigned long long)a1;
- (void)removeAllTexts;
- (void)removeSlidesAtIndices:(id)a0;
- (void)removeTextsAtIndices:(id)a0;
- (void)setEffectAttribute:(id)a0 forKey:(id)a1;

@end
