@class NSDictionary, NSMutableArray;

@interface _PSFeatureStatistics : NSObject

@property (retain, nonatomic) NSMutableArray *list;
@property double min;
@property double max;
@property double avg;
@property double stdev;
@property double mode;
@property (retain, nonatomic) NSDictionary *percentiles;

- (void).cxx_destruct;
- (void)addValue:(id)a0;
- (id)initWithList:(id)a0;
- (void)calculateStats;

@end
