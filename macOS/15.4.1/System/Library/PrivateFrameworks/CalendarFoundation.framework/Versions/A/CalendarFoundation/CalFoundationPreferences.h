@class NSString, NSDateComponents, CalPreferences;

@interface CalFoundationPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic) double simulatedDateForNowOffset;
@property (retain, nonatomic) NSString *stopTimeDemoMode;
@property (readonly, nonatomic) BOOL stopTimeDemoModeActive;
@property (readonly, nonatomic) NSDateComponents *stopTimeDemoModeComponents;
@property (nonatomic) double defaultEventDuration;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPreferencesForUnitTesting:(id)a0;

@end
