@interface ABExchangeLabelsConstraint : ABLabelsConstraint

+ (id)makePhoneLabels;
+ (id)propertyToValidLabelsDictionary;
+ (id)addressLabels;
+ (id)emailLabels;
+ (id)instantMessageLabels;
+ (id)makeAddressLabels;
+ (id)makeInstantMessageLabels;
+ (id)makeRelatedNamesLabels;
+ (id)otherDatesLabels;
+ (id)phoneLabels;
+ (id)propertyToInitialLabelDictionary;
+ (id)relatedNamesLabels;
+ (id)unsupportedProperties;
+ (id)urlLabels;

- (id)availableLabelsForProperty:(id)a0 activeLabels:(id)a1;
- (BOOL)customLabelsSupported;
- (id)initialLabelsForProperty:(id)a0;
- (BOOL)isLabelSupported:(id)a0 forProperty:(id)a1;
- (BOOL)isPropertySupported:(id)a0;

@end
