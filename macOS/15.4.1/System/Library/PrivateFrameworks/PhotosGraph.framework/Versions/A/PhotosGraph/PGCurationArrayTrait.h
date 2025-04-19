@class NSArray;

@interface PGCurationArrayTrait : PGCurationTrait

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *negativeItems;

- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isActive;
- (id)initWithItems:(id)a0;
- (id)initWithItems:(id)a0 negativeItems:(id)a1;

@end
