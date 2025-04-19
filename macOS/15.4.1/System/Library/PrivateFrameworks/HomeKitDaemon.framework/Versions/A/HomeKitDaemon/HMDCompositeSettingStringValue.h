@class NSString;

@interface HMDCompositeSettingStringValue : HMDCompositeSettingValue <HMDCompositeSettingsStringValueProviding>

@property (readonly, copy) NSString *stringValue;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (id)attributeDescriptions;
- (BOOL)isEqualValue:(id)a0;

@end
