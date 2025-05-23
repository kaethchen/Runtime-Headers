@class NSString, NSHashTable, PXGadgetSpec, PXExtendedTraitCollection;

@interface PXGadgetSpecManager : PXObservable <PXChangeObserver, PXMutableGadgetSpecManager>

@property (retain, nonatomic) PXGadgetSpec *currentGadgetSpec;
@property (readonly, nonatomic) Class gadgetSpecClass;
@property (readonly, nonatomic) long long scrollAxis;
@property (retain, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (retain, nonatomic) NSHashTable *updatedGadgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)mutableChangeObject;
- (void)_extendedTraitCollection:(id)a0 didChange:(unsigned long long)a1;
- (id)initWithGadgetSpecClass:(Class)a0 scrollAxis:(long long)a1 traitCollection:(id)a2;
- (void)updateGadgetDataSourceToSpecIfNeeded:(id)a0;

@end
