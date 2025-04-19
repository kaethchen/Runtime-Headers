@class EKTimedEventStorePurger, NSSet;

@interface PPEventStorageGuardedData : NSObject {
    EKTimedEventStorePurger *_ekStorePurger;
    NSSet *_calendarIdentifiers;
    NSSet *_invisibleCalendarIdentifiers;
    NSSet *_calendarObjectIDs;
    unsigned long long _activeNoPurgeSessions;
}

- (id)init;
- (void).cxx_destruct;
- (id)ekStore;

@end
