@interface HKCategoryType : HKSampleType

+ (id)_categoryTypeWithCode:(long long)a0;

- (id)initWithIdentifier:(id)a0;
- (long long)_defaultValue;
- (BOOL)_acceptsValue:(long long)a0;
- (long long)_categoryValueForValue:(long long)a0;
- (id)_predicateForSDKVersionToken:(unsigned long long)a0;

@end
