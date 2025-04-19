@class NSArray, NSEnumerator;

@interface MXHistogram : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *histogramData;
@property (readonly) unsigned long long totalBucketCount;
@property (readonly) NSEnumerator *bucketEnumerator;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithHistogramBucketData:(id)a0;

@end
