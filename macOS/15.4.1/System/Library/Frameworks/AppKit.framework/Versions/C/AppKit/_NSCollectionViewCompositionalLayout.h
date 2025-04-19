@class NSArray;

@interface _NSCollectionViewCompositionalLayout : NSCollectionViewCompositionalLayout

@property (readonly, nonatomic) long long scrollDirection;
@property (copy, nonatomic) NSArray *boundarySupplementaryItems;
@property (copy, nonatomic) NSArray *supplementaryItems;

- (void).cxx_destruct;
- (id)initWithLayoutSection:(id)a0;
- (id)initWithLayoutSection:(id)a0 configuration:(id)a1;
- (id)initWithLayoutSection:(id)a0 scrollDirection:(long long)a1;
- (id)initWithLayoutSectionProvider:(id /* block */)a0;
- (id)initWithLayoutSectionProvider:(id /* block */)a0 configuration:(id)a1;
- (id)initWithLayoutSectionProvider:(id /* block */)a0 scrollDirection:(long long)a1;
- (id)initWithSection:(id)a0;
- (id)initWithSection:(id)a0 configuration:(id)a1;
- (id)initWithSectionProvider:(id /* block */)a0;
- (id)initWithSectionProvider:(id /* block */)a0 configuration:(id)a1;

@end
