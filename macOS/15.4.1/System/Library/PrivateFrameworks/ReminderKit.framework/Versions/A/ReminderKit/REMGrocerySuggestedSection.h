@class NSString;

@interface REMGrocerySuggestedSection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long labelIndex;
@property (readonly, nonatomic) NSString *sectionCanonicalName;
@property (readonly, nonatomic) float confidenceScore;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLabelIndex:(long long)a0 sectionCanonicalName:(id)a1 confidenceScore:(float)a2;

@end
