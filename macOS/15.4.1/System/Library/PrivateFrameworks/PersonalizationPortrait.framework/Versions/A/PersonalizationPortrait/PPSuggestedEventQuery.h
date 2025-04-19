@class NSSet;

@interface PPSuggestedEventQuery : PPEventQuery

@property (retain, nonatomic) NSSet *matchingCategories;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
