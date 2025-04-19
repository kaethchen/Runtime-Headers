@class NSString;

@interface RPNWActivityEventMetrics : RPNWActivityMetrics

@property (retain, nonatomic) NSString *destination;
@property (nonatomic) unsigned long long eventSize;

- (void).cxx_destruct;
- (id)_metricsDictionary;

@end
