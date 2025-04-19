@class NSString, NSDate, MNDepartureUpdater;

@interface __MNDepartureTimeSpentCondition : NSObject <__MNDepartureCondition> {
    MNDepartureUpdater *_updater;
    NSDate *_initialDate;
    double _threshold;
}

@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithUpdater:(id)a0 timeThreshold:(double)a1;
- (double)scoreForLocation:(id)a0;

@end
