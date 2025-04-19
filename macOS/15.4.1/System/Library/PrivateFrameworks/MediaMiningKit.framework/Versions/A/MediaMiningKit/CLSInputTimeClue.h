@class NSArray, NSSet, CLSServiceManager, NSDate;

@interface CLSInputTimeClue : CLSInputClue {
    NSArray *_dateComponentsArray;
    NSSet *_localDates;
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    NSSet *_universalDates;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    CLSServiceManager *_serviceManager;
}

@property (copy, nonatomic) NSArray *events;

+ (id)clueWithDates:(id)a0 serviceManager:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (double)timeInterval;
- (id)localEndDate;
- (id)localStartDate;
- (id)universalEndDate;
- (id)universalStartDate;
- (id)universalDates;
- (void)_computeDateProperties;
- (void)_prepareWithProgressBlock:(id /* block */)a0;
- (id)localDates;
- (unsigned long long)numberOfDays;

@end
