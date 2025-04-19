@class NSURL;

@interface CEURLRecommendationAction : CERecommendationAction

@property (retain, nonatomic) NSURL *actionURL;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 actionType:(id)a1 title:(id)a2 actionURL:(id)a3;

@end
