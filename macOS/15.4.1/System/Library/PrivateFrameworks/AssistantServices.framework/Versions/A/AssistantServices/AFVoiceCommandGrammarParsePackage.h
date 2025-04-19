@class NSArray;

@interface AFVoiceCommandGrammarParsePackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *nBestParses;
@property (readonly, copy, nonatomic) NSArray *preITNNBestParses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithNBestParses:(id)a0 preITNNBestParses:(id)a1;

@end
