@class _HKDateIntervalCollection, NSDictionary, NSArray, NSDate, NSDateComponents;

@interface HKValueHistogramCollection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *valueHistogramsByDateIntervalIndex;
@property (readonly, nonatomic) _HKDateIntervalCollection *intervalCollection;
@property (readonly, copy, nonatomic) NSArray *quantityRanges;
@property (readonly, copy, nonatomic) NSArray *valueHistograms;
@property (readonly, copy, nonatomic) NSDate *anchorDate;
@property (readonly, copy, nonatomic) NSDateComponents *intervalComponents;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithQuantityRanges:(id)a0 valueHistogramsByDateIntervalIndex:(id)a1 anchorDate:(id)a2 intervalComponents:(id)a3;
- (id)valueHistogramForDate:(id)a0;

@end
