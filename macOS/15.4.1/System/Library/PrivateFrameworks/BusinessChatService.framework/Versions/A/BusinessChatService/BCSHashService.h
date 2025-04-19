@interface BCSHashService : NSObject

+ (long long)SHA256TruncatedHashForInputString:(id)a0 includedBytes:(unsigned long long)a1;
+ (id)SHA256HashForInputString:(id)a0;
+ (id)_SHA256DataForInputString:(id)a0;
+ (long long)_truncatedHashForFullHashData:(id)a0 includedBytes:(unsigned long long)a1;
+ (BOOL)isValidFullHash:(id)a0;
+ (long long)truncatedHashForFullHash:(id)a0 includedBytes:(unsigned long long)a1;

@end
