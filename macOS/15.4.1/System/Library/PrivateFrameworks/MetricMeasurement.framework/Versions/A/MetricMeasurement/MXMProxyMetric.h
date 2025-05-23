@class MXMMetric, MXMProbe;

@interface MXMProxyMetric : MXMMetric

@property (readonly, retain) MXMMetric *_underlyingMetric;
@property (readonly, copy) MXMProbe *_remoteProbe;
@property (readonly, copy) MXMMetric *metric;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)prepareWithOptions:(id)a0 error:(id *)a1;
- (void)willStop;
- (id)initWithMetric:(id)a0;
- (id)_constructProbe;
- (unsigned long long)_sampleMode;
- (BOOL)_shouldAlwaysWrapInProxy;
- (BOOL)_shouldConstructProbe;
- (BOOL)_shouldNeverWrapInProxy;
- (void)didStartAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 startDate:(id)a2;
- (void)didStartAtTime:(unsigned long long)a0 startDate:(id)a1;
- (void)didStopAtContinuousTime:(unsigned long long)a0 absoluteTime:(unsigned long long)a1 stopDate:(id)a2;
- (void)didStopAtTime:(unsigned long long)a0 stopDate:(id)a1;
- (void)willStartAtEstimatedTime:(unsigned long long)a0;

@end
