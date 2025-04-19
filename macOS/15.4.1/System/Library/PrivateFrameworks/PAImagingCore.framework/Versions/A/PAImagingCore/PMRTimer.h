@class NSString, PMRMeasurementList;

@interface PMRTimer : NSObject {
    unsigned long long _tick;
    PMRMeasurementList *_measurements;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebase;
}

@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)start;
- (BOOL)markAndReset;
- (void)markComplete;
- (id)measurementListByDraining;

@end
