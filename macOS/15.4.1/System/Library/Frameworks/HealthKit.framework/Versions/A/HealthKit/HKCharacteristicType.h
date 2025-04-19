@interface HKCharacteristicType : HKObjectType

- (id)initWithIdentifier:(id)a0;
- (id)_canoncialUnit;
- (id)_relatedCategoryType;
- (id)_relatedQuantityType;
- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)a0;
- (BOOL)_validateCharacteristic:(id)a0 error:(id *)a1;

@end
