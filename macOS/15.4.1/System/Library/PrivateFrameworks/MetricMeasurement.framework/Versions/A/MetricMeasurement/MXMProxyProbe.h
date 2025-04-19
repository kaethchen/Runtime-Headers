@class MXMProxyMetric;

@interface MXMProxyProbe : MXMProbe <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) MXMProxyMetric *proxyMetric;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProxyMetric:(id)a0;
- (id)sampleWithTimeout:(double)a0 stopReason:(unsigned long long *)a1;
- (void)updateNowUntilStoppedWithUpdateHandler:(id /* block */)a0 stopHandler:(id /* block */)a1;

@end
