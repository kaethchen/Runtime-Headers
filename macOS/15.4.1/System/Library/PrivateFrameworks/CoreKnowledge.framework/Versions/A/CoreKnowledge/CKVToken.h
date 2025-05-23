@class NSString, NSArray;

@interface CKVToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *cleanValue;
@property (readonly, nonatomic) unsigned long long beginIndex;
@property (readonly, nonatomic) unsigned long long endIndex;
@property (readonly, nonatomic) BOOL isSignificant;
@property (readonly, nonatomic) BOOL isWhitespace;
@property (readonly, nonatomic) NSArray *normalizedValues;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToToken:(id)a0;
- (id)initWithValue:(id)a0 cleanValue:(id)a1 beginIndex:(unsigned long long)a2 endIndex:(unsigned long long)a3 isSignificant:(BOOL)a4 isWhitespace:(BOOL)a5;
- (id)initWithValue:(id)a0 cleanValue:(id)a1 beginIndex:(unsigned long long)a2 endIndex:(unsigned long long)a3 isSignificant:(BOOL)a4 isWhitespace:(BOOL)a5 normalizedValues:(id)a6;

@end
