@class NSArray;

@interface GDSiriPerson : NSObject

@property (readonly, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) NSArray *givenNames;
@property (readonly, nonatomic) NSArray *phoneticGivenNames;
@property (readonly, nonatomic) NSArray *middleNames;
@property (readonly, nonatomic) NSArray *phoneticMiddleNames;
@property (readonly, nonatomic) NSArray *lastNames;
@property (readonly, nonatomic) NSArray *phoneticLastNames;
@property (readonly, nonatomic) NSArray *prefixes;
@property (readonly, nonatomic) NSArray *nickNames;
@property (readonly, nonatomic) NSArray *organizations;

- (void).cxx_destruct;
- (id)initWithContactIdentifiers:(id)a0 givenNames:(id)a1 phoneticGivenNames:(id)a2 middleNames:(id)a3 phoneticMiddleNames:(id)a4 lastNames:(id)a5 phoneticLastNames:(id)a6 prefixes:(id)a7 nickNames:(id)a8 organizations:(id)a9;

@end
