@class NSManagedObjectContext;

@interface CNCDUnifiedContactInfoHelper : NSObject

@property (readonly, nonatomic) NSManagedObjectContext *context;

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)infosForContactIdentifiers:(id)a0;
- (id)infosForUnifiedContactIdentifiers:(id)a0;
- (id)insertNewInfoForContactWithIdentifier:(id)a0;
- (id)insertNewInfoForUnifiedContactWithIdentifier:(id)a0;

@end
