@class MARelation, NSString, PGGraphMeaningNodeCollection, NSArray;

@interface PGGraphMeaningNode : PGGraphPropertylessNode <PGGraphPortraitTopic, PGGraphLocalizable, PGGraphSynonymSupport, PGAssetCollectionFeature> {
    NSString *_label;
}

@property (class, readonly, nonatomic) MARelation *childMeaningOfMeaning;
@property (class, readonly, nonatomic) MARelation *parentMeaningOfMeaning;
@property (class, readonly, nonatomic) MARelation *eventOfMeaning;
@property (class, readonly, nonatomic) MARelation *eventOfReliableMeaning;
@property (class, readonly, nonatomic) MARelation *momentOfMeaning;
@property (class, readonly, nonatomic) MARelation *momentOfReliableMeaning;

@property (readonly, nonatomic) NSString *pg_topic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long isVeryMeaningfulCachedValue;
@property (readonly) PGGraphMeaningNode *parentMeaningNode;
@property (readonly, nonatomic, getter=isVeryMeaningful) BOOL veryMeaningful;
@property (readonly, nonatomic) PGGraphMeaningNodeCollection *collection;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *localizedSynonyms;
@property (readonly, nonatomic) unsigned long long featureType;
@property (readonly, nonatomic) NSString *featureIdentifier;

+ (id)filter;
+ (id)_localizationKeyForMeaningLabel:(id)a0;
+ (id)_localizedNameForLabel:(id)a0;
+ (id)filterWithMeaning:(unsigned long long)a0;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)label;
- (id)initWithLabel:(id)a0;
- (void)enumerateMomentAlternativeEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumerateSubmeaningsUsingBlock:(id /* block */)a0;
- (id)associatedNodesForRemoval;
- (void)enumerateMeaningfulEventsUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (void)traverseParentMeaningHierarchyUsingBlock:(id /* block */)a0;
- (void)traverseSubmeaningHierarchyUsingBlock:(id /* block */)a0;

@end
