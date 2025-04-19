@class NSString, NSMutableDictionary;
@protocol CalMigrationABCReporter;

@interface CalABCCalendarMigrationFailureRecorder : NSObject <CalCalendarMigrationFailureRecorder>

@property (readonly, nonatomic) id<CalMigrationABCReporter> abcReporter;
@property (readonly, nonatomic) NSMutableDictionary *fatalFailures;
@property (readonly, nonatomic) NSMutableDictionary *nonFatalFailures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mostCommonFailureDescriptions:(id)a0;
+ (id)_abcDescriptionForError:(id)a0;
+ (id)_abcEventForFailure:(id)a0;
+ (id)_abcEventsForFailures:(id)a0;
+ (id)_abcStageStringForMigrationStage:(unsigned long long)a0;
+ (unsigned long long)_countTotalNumberOfFailures:(id)a0;

- (void).cxx_destruct;
- (id)_abcContext;
- (id)_abcEventForAllFailures;
- (id)initWithABCReporter:(id)a0;
- (void)recordMigrationFailure:(id)a0;
- (void)reportRecordedFailures;

@end
