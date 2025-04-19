@class NSMutableArray;

@interface TPPBPolicyDocument : PBCodable <NSCopying> {
    struct { unsigned char policyVersion : 1; } _has;
}

@property (nonatomic) BOOL hasPolicyVersion;
@property (nonatomic) unsigned long long policyVersion;
@property (retain, nonatomic) NSMutableArray *modelToCategorys;
@property (retain, nonatomic) NSMutableArray *categoriesByViews;
@property (retain, nonatomic) NSMutableArray *introducersByCategorys;
@property (retain, nonatomic) NSMutableArray *redactions;
@property (retain, nonatomic) NSMutableArray *keyViewMappings;
@property (retain, nonatomic) NSMutableArray *userControllableViews;
@property (retain, nonatomic) NSMutableArray *piggybackViews;
@property (retain, nonatomic) NSMutableArray *priorityViews;
@property (retain, nonatomic) NSMutableArray *inheritedExcludedViews;

+ (Class)categoriesByViewType;
+ (Class)inheritedExcludedViewsType;
+ (Class)introducersByCategoryType;
+ (Class)keyViewMappingType;
+ (Class)modelToCategoryType;
+ (Class)piggybackViewsType;
+ (Class)priorityViewsType;
+ (Class)redactionsType;
+ (Class)userControllableViewsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)redactionsCount;
- (void)clearRedactions;
- (void)addCategoriesByView:(id)a0;
- (void)addInheritedExcludedViews:(id)a0;
- (void)addIntroducersByCategory:(id)a0;
- (void)addKeyViewMapping:(id)a0;
- (void)addModelToCategory:(id)a0;
- (void)addPiggybackViews:(id)a0;
- (void)addPriorityViews:(id)a0;
- (void)addRedactions:(id)a0;
- (void)addUserControllableViews:(id)a0;
- (id)categoriesByViewAtIndex:(unsigned long long)a0;
- (unsigned long long)categoriesByViewsCount;
- (void)clearCategoriesByViews;
- (void)clearInheritedExcludedViews;
- (void)clearIntroducersByCategorys;
- (void)clearKeyViewMappings;
- (void)clearModelToCategorys;
- (void)clearPiggybackViews;
- (void)clearPriorityViews;
- (void)clearUserControllableViews;
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)inheritedExcludedViewsCount;
- (id)introducersByCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)introducersByCategorysCount;
- (id)keyViewMappingAtIndex:(unsigned long long)a0;
- (unsigned long long)keyViewMappingsCount;
- (id)modelToCategoryAtIndex:(unsigned long long)a0;
- (unsigned long long)modelToCategorysCount;
- (id)piggybackViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)piggybackViewsCount;
- (id)priorityViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)priorityViewsCount;
- (id)redactionsAtIndex:(unsigned long long)a0;
- (id)userControllableViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)userControllableViewsCount;

@end
