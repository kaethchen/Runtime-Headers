@class NSString;

@interface SEMSpanInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString *_value;
    unsigned int _location;
    unsigned int _length;
    float _matchScore;
    unsigned int _maxTokenCount;
    unsigned int _matchedTokenCount;
    unsigned int _maxStopWordCount;
    unsigned int _matchedStopWordCount;
    unsigned int _maxAliasCount;
    unsigned int _matchedAliasCount;
    unsigned int _editDistance;
    unsigned short _aliasMatchOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)value;
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
- (id)initWithValue:(id)a0 location:(unsigned int)a1 length:(unsigned int)a2 matchScore:(float)a3 maxTokenCount:(unsigned int)a4 matchedTokenCount:(unsigned int)a5 maxStopWordCount:(unsigned int)a6 matchedStopWordCount:(unsigned int)a7 maxAliasCount:(unsigned int)a8 matchedAliasCount:(unsigned int)a9 editDistance:(unsigned int)a10 aliasMatchOptions:(unsigned short)a11;
- (BOOL)isAliasMatch;
- (BOOL)isEqualToSpanInfo:(id)a0;

@end
