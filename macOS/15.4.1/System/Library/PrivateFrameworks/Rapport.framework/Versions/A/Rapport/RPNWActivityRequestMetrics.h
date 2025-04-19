@class NSString;

@interface RPNWActivityRequestMetrics : RPNWActivityMetrics

@property (retain, nonatomic) NSString *destination;
@property (nonatomic) unsigned long long requestSize;
@property (nonatomic) unsigned long long responseSize;
@property (nonatomic) unsigned long long replyTime;

- (void).cxx_destruct;
- (id)_metricsDictionary;

@end
