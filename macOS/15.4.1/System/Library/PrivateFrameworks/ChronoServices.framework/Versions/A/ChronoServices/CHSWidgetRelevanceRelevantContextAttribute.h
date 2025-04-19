@class LNRelevantContext;

@interface CHSWidgetRelevanceRelevantContextAttribute : CHSWidgetRelevanceAttribute

@property (readonly, nonatomic) LNRelevantContext *context;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRelevantContext:(id)a0;

@end
