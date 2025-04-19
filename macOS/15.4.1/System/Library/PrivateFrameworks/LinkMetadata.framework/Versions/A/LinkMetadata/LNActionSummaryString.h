@class NSString, NSArray;

@interface LNActionSummaryString : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *formatString;
@property (readonly, nonatomic) NSArray *parameterIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFormatString:(id)a0 parameterIdentifiers:(id)a1;

@end
