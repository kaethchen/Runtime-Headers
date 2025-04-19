@class NSString, NSData;

@interface KVEncodedSpanInfo : KVSpanInfo {
    NSString *_value;
    NSData *_buffer;
    const struct SpanInfo { unsigned char x0[1]; } *_encodedSpanInfo;
}

+ (id)spanInfoFromEncodedString:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)value;
- (id)encodedString;
- (float)matchScore;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })spanRange;
- (unsigned int)editDistance;
- (unsigned int)matchedAliasCount;
- (unsigned int)matchedStopWordCount;
- (unsigned int)matchedTokenCount;
- (unsigned int)maxAliasCount;
- (unsigned int)maxStopWordCount;
- (unsigned int)maxTokenCount;
- (BOOL)isApproximateMatch;
- (BOOL)isPartialMatch;
- (unsigned short)aliasMatchOptions;
- (id)getAliasTypesArray;
- (id)initWithBuffer:(id)a0 verify:(BOOL)a1 value:(id)a2 error:(id *)a3;
- (id)initWithValue:(id)a0 location:(unsigned int)a1 length:(unsigned int)a2 matchScore:(float)a3 maxTokenCount:(unsigned int)a4 matchedTokenCount:(unsigned int)a5 maxStopWordCount:(unsigned int)a6 matchedStopWordCount:(unsigned int)a7 maxAliasCount:(unsigned int)a8 matchedAliasCount:(unsigned int)a9 editDistance:(unsigned int)a10 aliasMatchOptions:(unsigned short)a11;
- (BOOL)isAliasMatch;
- (BOOL)isEqualToSpanInfo:(id)a0;

@end
