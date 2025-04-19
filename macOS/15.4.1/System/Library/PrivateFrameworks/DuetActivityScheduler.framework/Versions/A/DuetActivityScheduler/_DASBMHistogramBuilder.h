@class BPSPublisher, _DASBMMinimumSpanConfiguration, NSObject;
@protocol OS_os_log;

@interface _DASBMHistogramBuilder : NSObject <_DASHistogramBuilder>

@property (retain, nonatomic) BPSPublisher *publisher;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) BOOL saveSpans;
@property (copy, nonatomic) id /* block */ filter;
@property (copy, nonatomic) id /* block */ transform;
@property (copy, nonatomic) _DASBMMinimumSpanConfiguration *minimumSpanConfiguration;

+ (id)builderWithPublisher:(id)a0 saveSpans:(BOOL)a1;
+ (id)builderWithPublisher:(id)a0;

- (void).cxx_destruct;
- (id)histogram;
- (void)histogramOnResponseQueue:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithPublisher:(id)a0 saveSpans:(BOOL)a1;

@end
