@class NSString;

@interface SGTDateSuggestion : SGTSuggestion {
    NSString *_shortDisplayName;
}

+ (void)initialize;
+ (id)_componentsWithComponents:(id)a0 prefersFuture:(BOOL)a1 retry:(BOOL)a2;
+ (id)_dateComponentsMatchingInput:(id)a0 string:(id)a1;
+ (id)_dateComponentsMatchingMonthAndYear:(id)a0 formatter:(id)a1;
+ (id)_humanDateRangeWithName:(id)a0;
+ (id)_humanDateRangesMatchingInput:(id)a0 prefersFuture:(BOOL)a1;
+ (unsigned long long)_minimalUsefulDateLength;
+ (id)componentsWithComponents:(id)a0 prefersFuture:(BOOL)a1;
+ (id)dateComponentsRangeForDateComponents:(id)a0;
+ (id)dateComponentsRangeForISODateRange:(id)a0;
+ (id)rangeStringForDateComponents:(id)a0;
+ (id)rangeStringForDateComponentsRange:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_identifier;
- (id)scopes;
- (id)tokenTitle;
- (id)_propertyListRepresentation;
- (id)dateComponentsRange;
- (id)_shorterDisplayName;
- (BOOL)_shouldNotBeIncludedInRecents;
- (id)displayNameForScope:(long long)a0;
- (id)humanDateRange;
- (id)initWithDateComponents:(id)a0 scope:(long long)a1 attributeNames:(id)a2;
- (id)initWithHumanDateRange:(id)a0 scope:(long long)a1 attributeNames:(id)a2;
- (id)initWithISODateRange:(id)a0 scope:(long long)a1 attributeNames:(id)a2;
- (id)queryStringFragment;

@end
