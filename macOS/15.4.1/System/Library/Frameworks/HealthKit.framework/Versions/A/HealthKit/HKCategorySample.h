@class HKCategoryType;

@interface HKCategorySample : HKSample {
    long long _value;
}

@property (readonly) HKCategoryType *categoryType;
@property (readonly) long long value;

+ (BOOL)supportsSecureCoding;
+ (id)categorySampleWithType:(id)a0 value:(long long)a1 startDate:(id)a2 endDate:(id)a3 device:(id)a4 metadata:(id)a5;
+ (id)_categorySamplesSplittingDurationWithType:(id)a0 value:(long long)a1 startDate:(id)a2 endDate:(id)a3 device:(id)a4 metadata:(id)a5;
+ (BOOL)_isConcreteObjectClass;
+ (id)categorySampleWithType:(id)a0 value:(long long)a1 startDate:(id)a2 endDate:(id)a3;
+ (id)categorySampleWithType:(id)a0 value:(long long)a1 startDate:(id)a2 endDate:(id)a3 metadata:(id)a4;
+ (BOOL)supportsEquivalence;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setValue:(long long)a0;
- (BOOL)isEquivalent:(id)a0;
- (long long)hk_integerValue;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned long long x1; })a0;
- (id)_valueDescription;

@end
