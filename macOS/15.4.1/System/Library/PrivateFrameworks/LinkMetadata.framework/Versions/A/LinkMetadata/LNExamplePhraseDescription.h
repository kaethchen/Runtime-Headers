@class NSString, NSArray;

@interface LNExamplePhraseDescription : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long kind;
@property (readonly, copy, nonatomic) NSString *parentIdentifier;
@property (readonly, copy, nonatomic) NSArray *phrases;
@property (readonly, copy, nonatomic) NSString *phrase;
@property (readonly, copy, nonatomic) NSString *phraseTemplate;
@property (readonly, copy, nonatomic) NSString *expected;
@property (readonly, copy, nonatomic) NSString *parameter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKind:(long long)a0 parentIdentifier:(id)a1 phrase:(id)a2 expected:(id)a3 phraseTemplate:(id)a4;
- (id)initWithKind:(long long)a0 parentIdentifier:(id)a1 phrases:(id)a2 expected:(id)a3;
- (id)initWithKind:(long long)a0 parentIdentifier:(id)a1 phrases:(id)a2 expected:(id)a3 parameter:(id)a4;
- (id)initWithKind:(long long)a0 parentIdentifier:(id)a1 phrases:(id)a2 phrase:(id)a3 expected:(id)a4 parameter:(id)a5 phraseTemplate:(id)a6;
- (id)initWithNegativePhrases:(id)a0 parentIdentifier:(id)a1;
- (id)initWithOpenStringParameter:(id)a0 parentIdentifier:(id)a1 phrases:(id)a2;

@end
