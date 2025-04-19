@interface ABSearchElementHelper : NSObject

+ (id)AddressKeys;
+ (void)buildRepresentationFromSearchElement:(id)a0 builder:(id)a1 order:(id)a2;
+ (void)buildRepresentationFromSearchElement:(id)a0 builder:(id)a1 order:(id)a2 level:(long long)a3;
+ (void)calculateBestDateType:(long long *)a0 andBestValue:(double *)a1 forTimeInterval:(double)a2;
+ (BOOL)isSingleSearchElement:(id)a0 property:(id *)a1 value:(id *)a2 comparison:(long long *)a3 level:(long long)a4;
+ (id)nameProperties;
+ (id)nameValueForConjoinedSearchElement:(id)a0 comparison:(long long *)a1;
+ (id)propertiesOfSearchElements:(id)a0;

@end
