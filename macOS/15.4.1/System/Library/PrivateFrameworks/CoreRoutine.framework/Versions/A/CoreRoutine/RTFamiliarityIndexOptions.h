@class RTLocation, NSDateInterval;

@interface RTFamiliarityIndexOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) double lookbackInterval;
@property (readonly, nonatomic) unsigned long long spatialGranularity;
@property (readonly, nonatomic) RTLocation *referenceLocation;
@property (readonly, nonatomic) BOOL referenceLocationSummary;
@property (readonly, nonatomic) double distance;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0 lookbackInterval:(double)a1 spatialGranularity:(unsigned long long)a2 referenceLocation:(id)a3 referenceLocationSummary:(BOOL)a4 distance:(double)a5;
- (id)initWithDateInterval:(id)a0 spatialGranularity:(unsigned long long)a1;

@end
