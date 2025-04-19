@class NSString, SFCollectionCardSection, SFResultSection;

@interface SearchUISection : NSObject

@property (readonly) SFResultSection *resultSection;
@property (readonly) SFCollectionCardSection *collectionSection;
@property (readonly) NSString *sectionIdentifier;
@property (readonly) NSString *reuseIdentifier;

+ (id)reuseIdentifierForSectionResult;
+ (id)reuseIdentifierForCollectionSection;
+ (id)sectionWithResultSection:(id)a0 collectionCardSection:(id)a1 sectionIdentifier:(id)a2;
+ (id)sectionWithResultSection:(id)a0 sectionIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)initWithResultSection:(id)a0 collectionSection:(id)a1 sectionIdentifier:(id)a2;

@end
