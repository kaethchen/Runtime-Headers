@class NSString;

@interface PFPosterMediaSuggestion : PFPosterMedia <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *suggestionUUID;
@property (nonatomic) unsigned short suggestionSubtype;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetUUID:(id)a0 suggestionUUID:(id)a1 suggestionSubtype:(unsigned short)a2;

@end
