@class NSArray;

@interface FAMegadomePerson : NSObject

@property (readonly, nonatomic) NSArray *emails;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) NSArray *contactIdentifiers;

- (void).cxx_destruct;
- (id)initWithEmails:(id)a0 phoneNumbers:(id)a1 names:(id)a2 contactIdentifiers:(id)a3;
- (id)initWithVisualIdentifierViewPerson:(id)a0;

@end
