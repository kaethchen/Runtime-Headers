@class NSString, NSMutableDictionary, NSMutableArray;

@interface IPEventClassificationType : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *defaultTitle;
@property (retain, nonatomic) NSString *titleSenderTemplate;
@property (nonatomic) unsigned long long classificationDepth;
@property (nonatomic) int defaultStartingTimeHour;
@property (nonatomic) int defaultStartingTimeMinutes;
@property (nonatomic) int defaultCumulativeMinutes;
@property (nonatomic) double defaultDuration;
@property (nonatomic) unsigned long long preferedMeridian;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, getter=isAllDayAllowed) BOOL allDayAllowed;
@property (nonatomic) BOOL useForTimeAdjustement;
@property (nonatomic) double minutesBeforeDefaultStartingTime;
@property (nonatomic) double minutesAfterDefaultStartingTime;
@property (retain, nonatomic) NSMutableArray *patternKeywords;
@property (retain, nonatomic) NSMutableArray *genericPatternKeywords;
@property (retain, nonatomic) NSMutableArray *titleKeywords;
@property (retain, nonatomic) NSMutableArray *subjectKeywords;
@property (weak, nonatomic) IPEventClassificationType *parent;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) NSMutableDictionary *upperPriorityEventTypesIdentifiers;
@property (nonatomic, getter=isHighPriority) BOOL highPriority;
@property (nonatomic, getter=isLowPriority) BOOL lowPriority;
@property (readonly, nonatomic) BOOL prefersTitleSenderDecoration;
@property (readonly, nonatomic, getter=isMovieRelated) BOOL movieRelated;
@property (readonly, nonatomic, getter=isCultureRelated) BOOL cultureRelated;
@property (readonly, nonatomic, getter=isSportRelated) BOOL sportRelated;
@property (readonly, nonatomic, getter=isMealRelated) BOOL mealRelated;
@property (readonly, nonatomic, getter=isFairlyGeneric) BOOL fairlyGeneric;
@property (readonly, nonatomic, getter=isAppointment) BOOL isAppointment;

+ (id)eventTypeForSportAndLanguageID:(id)a0;
+ (id)eventTypeForMealsAndLanguageID:(id)a0;
+ (double)_averageDistanceBetweenFeatureKeyword:(id)a0 featureDates:(id)a1 subjectLength:(unsigned long long)a2 inSubject:(BOOL)a3;
+ (id)_dateComponentsFromTaxonomyHHMMString:(id)a0;
+ (id)_identifierForCluster:(unsigned long long)a0;
+ (id)_identifiersForClusters:(id)a0;
+ (id)_loadTaxonomyForLanguageID:(id)a0 clusterIdentifier:(id)a1 error:(id *)a2;
+ (id)_parentFromIdentifier:(id)a0;
+ (double)_scoreForKeywordsInSubject:(BOOL)a0 distanceToDates:(double)a1 polarity:(unsigned long long)a2 matchedRatio:(double)a3 keywordType:(unsigned long long)a4;
+ (id)allClusterIdentifiers;
+ (id)cleanSubject:(id)a0;
+ (id)eventClassificationTypeFromMessageUnit:(id)a0 detectedStartDate:(id)a1;
+ (id)eventClassificationTypeFromMessageUnit:(id)a0 features:(id)a1;
+ (id)eventClassificationTypeFromMessageUnit:(id)a0 features:(id)a1 datafeatures:(id)a2;
+ (id)eventClassificationTypeFromMessageUnit:(id)a0 keywordFeatures:(id)a1 datafeatures:(id)a2;
+ (id)eventTypeForCultureAndLanguageID:(id)a0;
+ (id)eventTypeForEntertainmentAndLanguageID:(id)a0;
+ (id)eventTypeForGenericEventAndLanguageID:(id)a0;
+ (id)eventTypeForMoviesAndLanguageID:(id)a0;
+ (id)fallbackEventTitleForMessageUnits:(id)a0 subject:(id)a1 checkForDateInSubject:(BOOL)a2;
+ (id)humanReadableClusterType:(unsigned long long)a0;
+ (id)morePreciseEventClassificationTypeBetweenType:(id)a0 and:(id)a1;
+ (id)taxonomyForLanguageID:(id)a0 clusterIdentifier:(id)a1;
+ (id)taxonomyForLanguageID:(id)a0 clusterType:(unsigned long long)a1;
+ (id)titleGenerationModelPredictionForMessageUnits:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_addParent:(id)a0;
- (id)decoratedTitleFromTitle:(id)a0 participantName:(id)a1 isTitleSenderDecorated:(BOOL *)a2;
- (void)_addChild:(id)a0;
- (void)_addUpperPriorityEventTypeIdentifier:(id)a0 weight:(id)a1;
- (double)_hasPriorityOverEventType:(id)a0;
- (BOOL)_isAParentOf:(id)a0;
- (id)_mealClassificationTypeUsingStartDate:(id)a0;
- (void)addEventPatterns:(id)a0;
- (id)adjustedEventClassificationTypeWithStartDate:(id)a0;
- (id)adjustedEventTitleForMessageUnits:(id)a0;
- (id)adjustedEventTitleForMessageUnits:(id)a0 subject:(id)a1 dateInSubject:(id)a2 eventStartDate:(id)a3 isGeneratedFromSubject:(BOOL *)a4;
- (id)adjustedEventTitleForMessageUnits:(id)a0 subject:(id)a1 dateInSubject:(id)a2 eventStartDate:(id)a3 useTitleGenerationModel:(BOOL)a4 isGeneratedFromSubject:(BOOL *)a5;
- (id)adjustedEventTitleForMessageUnits:(id)a0 subject:(id)a1 dateInSubject:(id)a2 eventStartDate:(id)a3 useTitleGenerationModel:(BOOL)a4 isGeneratedFromSubject:(BOOL *)a5 isGeneratedFromTitleGenerationModel:(BOOL *)a6;
- (id)adjustedEventTitleForMessageUnits:(id)a0 subject:(id)a1 isDateInSubject:(BOOL)a2;
- (BOOL)allowGenericKeywordsForLanguage:(id)a0;
- (id)dateWithoutTime:(id)a0;
- (id)initWithIdentifier:(id)a0 language:(id)a1 patternKeywords:(id)a2 titleKeywords:(id)a3 subjectKeywords:(id)a4 defaultTitle:(id)a5 titleSenderTemplate:(id)a6 defaultStartingTimeHour:(int)a7 defaultStartingTimeMinutes:(int)a8 defaultDuration:(double)a9 preferedMeridian:(unsigned long long)a10 parent:(id)a11 children:(id)a12 useForTimeAdjustement:(BOOL)a13 minutesBeforeDefaultStartingTime:(double)a14 minutesAfterDefaultStartingTime:(double)a15 allDayAllowed:(BOOL)a16 useGenericPatternsInClassification:(BOOL)a17 movieRelated:(BOOL)a18 mealRelated:(BOOL)a19 cultureRelated:(BOOL)a20 sportRelated:(BOOL)a21 fairlyGeneric:(BOOL)a22 appointmentRelated:(BOOL)a23;
- (BOOL)isDateWithinRange:(id)a0;
- (id)properCasedTitleForTitle:(id)a0 locale:(id)a1;
- (BOOL)questionMarkInString:(id)a0;

@end
