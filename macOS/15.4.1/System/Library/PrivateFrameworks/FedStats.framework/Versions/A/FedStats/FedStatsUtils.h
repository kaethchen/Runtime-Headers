@interface FedStatsUtils : NSObject

+ (id)SHA1AsBitString:(id)a0;
+ (id)bitStringToInt:(id)a0;
+ (id)getDeviceRegion;
+ (BOOL)checkDeviceRegionCodeRestrictionForAllowedRegions:(id)a0 deniedRegions:(id)a1;
+ (id)intToBitString:(unsigned long long)a0 withLength:(unsigned long long)a1;
+ (BOOL)isNaturalLanguageAvailable;
+ (id)tokenizeSentence:(id)a0 removePunctuation:(BOOL)a1 tokenizePerson:(BOOL)a2 tokenizeLocation:(BOOL)a3 tokenizeNumber:(BOOL)a4 action:(long long)a5;

@end
