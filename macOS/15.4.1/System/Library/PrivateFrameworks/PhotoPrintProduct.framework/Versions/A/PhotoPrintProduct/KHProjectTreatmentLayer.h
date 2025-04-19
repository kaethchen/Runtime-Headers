@interface KHProjectTreatmentLayer : KHTreatmentLayer

- (void)remove;
- (id)layer;
- (id)treatment;
- (id)assetForId:(unsigned long long)a0;
- (Class)attributeClass;
- (id)initWithModelId:(id)a0 inDatabase:(id)a1;
- (BOOL)isProjectModel;

@end
