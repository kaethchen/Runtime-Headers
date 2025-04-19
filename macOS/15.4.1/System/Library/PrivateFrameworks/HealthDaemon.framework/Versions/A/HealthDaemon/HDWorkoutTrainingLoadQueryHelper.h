@class HDWorkoutTrainingLoadDataSource, HDProfile, NSDate, _HKFilter, NSDateComponents;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDWorkoutTrainingLoadQueryHelper : NSObject {
    HDProfile *_profile;
    _HKFilter *_filter;
    long long _options;
    NSDate *_anchorDate;
    NSDateComponents *_intervalComponents;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
    HDWorkoutTrainingLoadDataSource *_dataSource;
}

- (void).cxx_destruct;
- (id)initWithFilter:(id)a0 options:(long long)a1 profile:(id)a2;
- (id)_calculatorWithIntervalCollection:(id)a0;
- (id)_trainingLoadFromStatistics:(id)a0 count:(long long)a1;
- (void)fetchTrainingLoadCollectionWithCompletion:(id /* block */)a0;
- (void)fetchTrainingLoadWithCompletion:(id /* block */)a0;
- (id)initWithFilter:(id)a0 options:(long long)a1 anchorDate:(id)a2 intervalComponents:(id)a3 profile:(id)a4;

@end
