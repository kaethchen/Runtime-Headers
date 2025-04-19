@class NSMapTable, CLSMeaningClue, CLSInputPeopleClue;

@interface CLSClueCollection : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _recursiveLock;
    NSMapTable *_inputCluesByKey;
    NSMapTable *_outputCluesByKey;
    NSMapTable *_meaningCluesByKey;
}

@property (retain, nonatomic) CLSInputPeopleClue *mePersonClue;
@property (readonly) unsigned long long versionCount;
@property (readonly) CLSMeaningClue *locationMobilityClue;

- (id)description;
- (void).cxx_destruct;
- (double)timeInterval;
- (long long)year;
- (id)locations;
- (id)localEndDate;
- (id)localStartDate;
- (id)peopleNames;
- (id)universalEndDate;
- (id)universalStartDate;
- (id)universalDates;
- (id)locationRegions;
- (BOOL)hasMeaningClueWithKey:(id)a0 andValue:(id)a1;
- (unsigned long long)numberOfPersons;
- (id)peopleDescriptionWithoutPeople:(id)a0;
- (void)_incrementVersionCount;
- (void)_mergeInputClue:(id)a0;
- (void)_mergeMeaningClue:(id)a0;
- (void)_mergeOutputClue:(id)a0;
- (void)enumerateLocationClues:(id /* block */)a0;
- (void)enumeratePeopleClues:(id /* block */)a0;
- (void)enumerateTimeClues:(id /* block */)a0;
- (void)enumerateTimeOfDayClues:(id /* block */)a0;
- (BOOL)hasMeaningClueWithKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (BOOL)hasOutputClueWithKey:(id)a0 andValue:(id)a1;
- (BOOL)hasOutputClueWithKey:(id)a0 value:(id)a1 andMinimumScore:(double)a2;
- (id)initWithServiceManager:(id)a0;
- (id)inputClues;
- (id)inputCluesForKey:(id)a0;
- (id)localDates;
- (id)locationPlacemarks;
- (id)locationRegionsInPlacemarks;
- (id)mePerson;
- (id)meaningClues;
- (id)meaningCluesForKey:(id)a0;
- (id)meaningCluesForKey:(id)a0 andValue:(id)a1;
- (void)mergeClues:(id)a0;
- (unsigned long long)numberOfDays;
- (unsigned long long)numberOfLocations;
- (unsigned long long)numberOfTimes;
- (id)outputClues;
- (id)outputCluesForKey:(id)a0;
- (id)outputCluesForKey:(id)a0 andValue:(id)a1;
- (id)peopleDescription;
- (void)prepareWithProgressBlock:(id /* block */)a0;
- (id)uniqueInputClues;
- (id)uniqueMeaningClueForKey:(id)a0 andValue:(id)a1;
- (id)uniqueMeaningClues;
- (id)uniqueMeaningCluesForKey:(id)a0;
- (id)uniqueOutputClueForKey:(id)a0 andValue:(id)a1;
- (id)uniqueOutputClues;
- (id)uniqueOutputCluesForKey:(id)a0;
- (id)universalDateInterval;

@end
