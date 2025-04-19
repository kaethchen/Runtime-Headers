@class NSString, NSArray;

@interface FBKSectionIdentifierGroup : FBKDiffableSection

@property (retain, nonatomic) NSString *givenSectionIdentifier;
@property (retain, nonatomic) NSArray *givenRowIdentifiers;

- (void).cxx_destruct;
- (id)sectionIdentifier;
- (id)initWithSectionIdentifier:(id)a0;
- (id)rowIdentifiers;

@end
