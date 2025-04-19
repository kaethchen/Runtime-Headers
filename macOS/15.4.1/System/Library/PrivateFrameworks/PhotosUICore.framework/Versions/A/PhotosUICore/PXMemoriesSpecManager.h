@class PXMemoriesSpec;

@interface PXMemoriesSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) PXMemoriesSpec *spec;

- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 style:(unsigned long long)a2;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (Class)specClass;

@end
