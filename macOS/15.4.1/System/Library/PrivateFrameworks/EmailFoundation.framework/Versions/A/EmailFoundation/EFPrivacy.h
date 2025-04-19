@interface EFPrivacy : NSObject

+ (id)fullyOrPartiallyRedactedStringForString:(id)a0;
+ (id)fullyRedactedStringForString:(id)a0;
+ (id)partiallyRedactedStringForString:(id)a0;
+ (id)partiallyRedactedStringForString:(id)a0 maximumUnredactedLength:(unsigned long long)a1;
+ (long long)numberOfDigits:(long long)a0;
+ (long long)weeksSinceDate:(id)a0;
+ (long long)roundedInteger:(long long)a0;
+ (unsigned long long)_roundQueryLogCount:(unsigned long long)a0 maxCount:(unsigned long long)a1 queryCount:(unsigned long long)a2;
+ (unsigned int)bucketMessageCount:(unsigned long long)a0;
+ (unsigned long long)bucketValueForQueryLogCount:(id)a0 bucketValues:(id)a1;
+ (long long)bucketedMessageAgeSinceDate:(id)a0 leadingDigits:(long long)a1;
+ (long long)bucketedNumber:(int)a0 leadingDigits:(long long)a1;
+ (id)dateByRemovingTimeComponentsFromDate:(id)a0;
+ (id)fullyOrPartiallyRedactFields:(id)a0 inString:(id)a1;
+ (id)fullyOrPartiallyRedactedStringForString:(id)a0 maximumUnredactedLength:(unsigned long long)a1;
+ (id)partiallyRedactedDictionary:(id)a0;
+ (id)partiallyRedactedStringFromArray:(id)a0;
+ (id)redactedQueryStringForQueryString:(id)a0;
+ (id)redactedQueryStringForSearchableQueryString:(id)a0;
+ (long long)roundedInteger:(long long)a0 placeValueDigits:(long long)a1;

@end
