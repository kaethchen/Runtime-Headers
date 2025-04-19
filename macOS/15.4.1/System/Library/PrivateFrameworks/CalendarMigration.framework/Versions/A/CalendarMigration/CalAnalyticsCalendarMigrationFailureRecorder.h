@class NSString;
@protocol CalMigrationAnalyticsSender;

@interface CalAnalyticsCalendarMigrationFailureRecorder : NSObject <CalCalendarMigrationFailureRecorder>

@property (readonly, nonatomic) id<CalMigrationAnalyticsSender> analyticsSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_analyticsDescriptionForError:(id)a0;
+ (id)_analyticsStageStringForMigrationStage:(unsigned long long)a0;
+ (id)_payloadForFailure:(id)a0;

@end
