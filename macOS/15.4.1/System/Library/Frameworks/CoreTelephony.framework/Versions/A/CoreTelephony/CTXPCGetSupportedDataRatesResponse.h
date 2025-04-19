@class CTSupportedMaxDataRates;

@interface CTXPCGetSupportedDataRatesResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTSupportedMaxDataRates *rates;

+ (id)allowedClassesForArguments;

- (id)initWithSupportedRates:(id)a0;

@end
