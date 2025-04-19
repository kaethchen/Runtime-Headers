@class NSString, NSArray;

@interface TCTestSentence : NSObject <NSCopying, NSSecureCoding> {
    NSString *_originalString;
    NSArray *_grammarDetails;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *originalString;
@property (readonly, copy) NSString *testString;
@property (readonly, copy) NSString *finalString;
@property (readonly, copy) NSArray *grammarDetails;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginalString:(id)a0 grammarDetails:(id)a1;
- (id)initWithTestString:(id)a0;

@end
