@class PXFeatureSpec, NSString, PXExtendedTraitCollection;

@interface PXFeatureSpecManager : PXObservable <PXChangeObserver>

@property (readonly, nonatomic) unsigned long long defaultChangesToUpdateFor;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) PXFeatureSpec *spec;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)mutableChangeObject;
- (void)_setSpec:(id)a0;
- (void)_updateSpec;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)a0;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (void)invalidateSpec;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (Class)specClass;

@end
