@class VIObjectCategory, NSString, VIOntologyNode, VIThirdPartyObject, CSUSearchableKnowledgeObject, VIObjectKnowledge;

@interface VIRegionOfInterestResultItem : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) VIObjectCategory *objectCategory;
@property (readonly, nonatomic) VIOntologyNode *ontologyNode;
@property (readonly, nonatomic) VIObjectKnowledge *objectKnowledge;
@property (readonly, nonatomic) VIThirdPartyObject *thirdPartyObject;
@property (readonly, nonatomic) CSUSearchableKnowledgeObject *searchableKnowledgeObject;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (short)csuSearchableKnowledgeObjectIdType;
- (id)initWithDomain:(id)a0 caption:(id)a1 thirdPartyObject:(id)a2 ontologyNode:(id)a3 objectKnowledge:(id)a4;
- (id)initWithDomain:(id)a0 thirdPartyObject:(id)a1 ontologyNode:(id)a2 objectKnowledge:(id)a3;

@end
