@class NSArray;

@interface PPSIntervalSetRequest : PPSDataRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *dimensions;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMetrics:(id)a0 dimensions:(id)a1 predicate:(id)a2 timeFilter:(id)a3;
- (id)initWithMetrics:(id)a0 predicate:(id)a1 timeFilter:(id)a2;

@end
