@class SFSearchResult;

@interface SFResultFeedback : SFFeedback <NSCopying>

@property (retain, nonatomic) SFSearchResult *result;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0;

@end
