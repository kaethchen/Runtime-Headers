@class NSString, NSSet, ATXSuggestedPagesTunableConstants;

@interface ATXModeFaceComplicationHeuristicDataSource : NSObject <ATXModeFaceComplicationDataSource> {
    NSSet *_allComplicationDescriptors;
    NSSet *_allWidgetDescriptors;
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_addComplicationWithFamily:(long long)a0 extension:(id)a1 kind:(id)a2 container:(id)a3 score:(double)a4 to:(id)a5;
- (void)_addSystemSmallWidgetWithExtension:(id)a0 kind:(id)a1 container:(id)a2 score:(double)a3 to:(id)a4;
- (id)_complicationsForDrivingMode;
- (id)_complicationsForExerciseMode;
- (id)_complicationsForGamingMode;
- (id)_complicationsForMindfulnessMode;
- (id)_complicationsForPersonalMode;
- (id)_complicationsForReadingMode;
- (id)_complicationsForReduceInterruptions;
- (id)_complicationsForSleepMode;
- (id)_complicationsForWorkMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (BOOL)_hasSignificantRemindersEvents;
- (BOOL)_hasSignificantStocksEvents;
- (BOOL)_hasTVInterest;
- (id)_landscapeComplicationsForDrivingMode;
- (id)_landscapeComplicationsForExerciseMode;
- (id)_landscapeComplicationsForGamingMode;
- (id)_landscapeComplicationsForMindfulnessMode;
- (id)_landscapeComplicationsForPersonalMode;
- (id)_landscapeComplicationsForReadingMode;
- (id)_landscapeComplicationsForReduceInterruptions;
- (id)_landscapeComplicationsForSleepMode;
- (id)_landscapeComplicationsForWorkMode;
- (id)provideComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)provideLandscapeComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;

@end
