@class NSString, NSNumber;

@interface HDPedometerDataCollector : HDCoreMotionDataCollector <HDUserCharacteristicsProfileObserver> {
    NSNumber *_userCondition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isPedometerDataCollectionSupported;

- (void)dealloc;
- (void).cxx_destruct;
- (id)persistentIdentifier;
- (id)initWithProfile:(id)a0;
- (id)collectedTypes;
- (Class)coreMotionDatumClass;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (id)queue_newDataSource;
- (void)userCharacteristicsManager:(id)a0 didUpdateUserProfile:(id)a1;

@end
