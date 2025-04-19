@class NSString;

@interface ABCardViewMutableMultiValue : ABCardViewMultiValue <ABCardViewMutableMultiValue>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setProperty:(id)a0;
- (void)setReadOnly:(BOOL)a0;
- (void)removeEntryAtIndex:(unsigned long long)a0;
- (id)addValue:(id)a0 withLabel:(id)a1;
- (void)replaceLabelAtIndex:(unsigned long long)a0 withLabel:(id)a1;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(id)a1;
- (void)setPersonIdentifiers:(id)a0;
- (id)addEmptyValueAndLabel;
- (id)addEmptyValueWithLabel:(id)a0;
- (void)addValue:(id)a0 withLabel:(id)a1 andIdentifier:(id)a2;
- (void)duplicateEntryAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)replaceAccountNameAtIndex:(unsigned long long)a0 withAccountName:(id)a1;
- (void)setDuplicate:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void)setIsPrivateValue:(BOOL)a0 index:(unsigned long long)a1;
- (void)setMultiValueIdentifiers:(id)a0 atIndex:(unsigned long long)a1;
- (void)setPersonIdentifiers:(id)a0 atIndex:(unsigned long long)a1;
- (void)setReadOnly:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void)setSuggestedValue:(id)a0 atIndex:(unsigned long long)a1;

@end
