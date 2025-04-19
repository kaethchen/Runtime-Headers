@class NSMutableArray;

@interface MRExternalDeviceMessageMetricsEntry : NSObject

@property (nonatomic) unsigned long long avg;
@property (nonatomic) unsigned long long min;
@property (nonatomic) unsigned long long max;
@property (nonatomic) unsigned long long total;
@property (retain, nonatomic) NSMutableArray *values;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)updateWithValue:(unsigned long long)a0;

@end
