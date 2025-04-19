@class NSArray, NSSet, NSString, NSDateComponents, NSDate;

@interface PHSearchSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *personUUIDs;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDateComponents *startDateComponents;
@property (readonly, nonatomic) NSDateComponents *endDateComponents;
@property (readonly, nonatomic) NSSet *locationAssetUUIDs;
@property (readonly, nonatomic) NSArray *suggestionComponents;
@property (readonly, nonatomic) NSArray *momentUUIDs;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long categoriesType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } matchRangeOfSearchText;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL hasApproximateCount;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) unsigned long long entityType;

+ (id)new;
+ (BOOL)_suggestionsCategoryTypeIsSupportedForDisambiguation:(unsigned long long)a0;
+ (id)indexCategoriesWithApproximateCounts;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (id)initForDateFilterWithStartDate:(id)a0 endDate:(id)a1;
- (id)initForDateFilterWithStartDateComponents:(id)a0 endDateComponents:(id)a1;
- (id)initForGenericLocationFilterWithText:(id)a0 genericLocationTuples:(id)a1 allowedIndexCategories:(id)a2;
- (id)initForLocationFilterWithAssetUUIDs:(id)a0 locationText:(id)a1;
- (id)initForMeaningFilterWithMeaningfulEvent:(id)a0;
- (id)initForPartOfDayFilterWithPartOfDayLocalizedText:(id)a0;
- (id)initForPartOfWeekFilterWithPartOfWeekLocalizedText:(id)a0;
- (id)initForPersonFilterWithPersonUUIDs:(id)a0;
- (id)initForPersonalEventFilterWithMomentUUIDs:(id)a0;
- (id)initForSeasonFilterWithSeasonLocalizedText:(id)a0;
- (id)initForTripFilterWithLocationName:(id)a0;
- (id)initWithType:(unsigned long long)a0 categoriesType:(unsigned long long)a1 text:(id)a2 matchRangeOfSearchText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 count:(unsigned long long)a4 suggestionComponents:(id)a5;
- (id)initWithType:(unsigned long long)a0 entityType:(unsigned long long)a1 text:(id)a2 matchRangeOfSearchText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 personUUID:(id)a4 count:(unsigned long long)a5;
- (id)redactedJSONDictionary;

@end
