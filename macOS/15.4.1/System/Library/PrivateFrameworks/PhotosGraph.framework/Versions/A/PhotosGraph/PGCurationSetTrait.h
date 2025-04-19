@class NSSet;

@interface PGCurationSetTrait : PGCurationTrait

@property (readonly, nonatomic) NSSet *items;
@property (readonly, nonatomic) NSSet *negativeItems;

- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)initWithItems:(id)a0;
- (id)initWithItems:(id)a0 negativeItems:(id)a1;

@end
