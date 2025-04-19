@class NSMutableData, NSString;

@interface UVCExtensionAnalyticsHistogramEvent : UVCExtensionAnalyticsEvent {
    struct { unsigned long long bucket_count; unsigned long long bucket_width; unsigned long long bucket_base; unsigned long long value_normalizer; } _configuration;
    NSMutableData *_buckets;
    NSString *_bucketName;
}

- (void).cxx_destruct;
- (id)currentValue;
- (void)setCurrentValue:(id)a0;
- (void)createBuckets;
- (id)initWithName:(id)a0 attributes:(id)a1 bucketName:(id)a2 configuration:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a3;

@end
