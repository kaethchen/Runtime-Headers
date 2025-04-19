@class NSSet;

@interface PGGraphPersonsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *personLocalIdentifiers;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (unsigned long long)type;
- (id)initWithPersonLocalIdentifiers:(id)a0;

@end
