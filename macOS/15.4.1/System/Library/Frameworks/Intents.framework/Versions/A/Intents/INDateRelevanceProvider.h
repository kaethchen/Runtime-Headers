@class NSDate;

@interface INDateRelevanceProvider : INRelevanceProvider

@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;

@end
