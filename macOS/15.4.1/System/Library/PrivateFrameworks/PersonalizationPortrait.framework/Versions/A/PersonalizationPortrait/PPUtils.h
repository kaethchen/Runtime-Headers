@interface PPUtils : NSObject

+ (id)preferredLanguages;
+ (id)osBuild;
+ (BOOL)isInternalDevice;
+ (id)Sha256ForData:(id)a0 withSalt:(id)a1;
+ (id)hexUUID;
+ (long long)compareDouble:(double)a0 withDouble:(double)a1;
+ (id)coordinatesToGeoHashWithLength:(unsigned long long)a0 latitude:(double)a1 longitude:(double)a2;
+ (id)currentLocaleLanguageCode;
+ (void)enumerateChunksOfSize:(unsigned long long)a0 fromArray:(id)a1 usingBlock:(id /* block */)a2;
+ (id)formatStringArray:(id)a0 truncatingAtLength:(unsigned long long)a1;
+ (id)hexOfBytes:(const void *)a0 size:(unsigned long long)a1;
+ (BOOL)isFirstPartyApp:(id)a0;
+ (double)jaroSimilarityForString:(id)a0 other:(id)a1;
+ (BOOL)localizedTimeStructForDate:(id)a0 tm:(struct tm { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; long long x9; char *x10; } *)a1;
+ (BOOL)localizedTimeStructForSecondsFrom1970:(double)a0 tm:(struct tm { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; long long x9; char *x10; } *)a1;
+ (id)reduceSpotlightDomainIdentifiers:(id)a0;
+ (long long)reverseCompareDouble:(double)a0 withDouble:(double)a1;
+ (id)sqliteGlobEscape:(id)a0;
+ (BOOL)yesWithProbability:(double)a0;

@end
