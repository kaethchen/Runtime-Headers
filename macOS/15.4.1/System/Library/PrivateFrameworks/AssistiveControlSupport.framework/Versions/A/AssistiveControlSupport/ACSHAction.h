@class NSObject;
@protocol ACSHOutputEventPerformer;

@interface ACSHAction : ACSHPlistObject

@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSObject<ACSHOutputEventPerformer> *eventPerformer;
@property (nonatomic) double recordedOffset;
@property (nonatomic) unsigned long long repeatCount;
@property (nonatomic) BOOL shouldAutoRepeat;
@property (nonatomic) BOOL isStickyKey;
@property (nonatomic) BOOL stickyKeyRepeatActivated;
@property (nonatomic) double repeatFrequencyInSeconds;
@property (nonatomic) unsigned long long actionStage;
@property (readonly, nonatomic) BOOL shouldPerformDoubleActionIfPossible;
@property (readonly, nonatomic) BOOL hasAssociatedSound;
@property (readonly, nonatomic) BOOL hasAssociatedSoundForDoubleAction;

+ (id)descriptionForActionType:(unsigned long long)a0;
+ (Class)classForActionType:(unsigned long long)a0;
+ (Class)classForDict:(id)a0;
+ (id)titleForActionType:(unsigned long long)a0;
+ (id)titleForPlaceholderActionType:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)repeatEndedWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)descriptionForDepth:(unsigned long long)a0;
- (id)dictionaryForSaving;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performDeactivateWithEventSourceData:(id)a0;
- (void)performDoubleActionWithEventSourceData:(id)a0;
- (void)performWithEventSourceData:(id)a0;
- (BOOL)shouldPerform;

@end
