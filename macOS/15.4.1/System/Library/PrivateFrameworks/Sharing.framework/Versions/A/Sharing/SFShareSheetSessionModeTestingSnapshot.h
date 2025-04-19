@class NSArray, NSDictionary;

@interface SFShareSheetSessionModeTestingSnapshot : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *placeholderItemDescriptions;
@property (copy, nonatomic) NSArray *peopleSuggestionActivityTypes;
@property (copy, nonatomic) NSArray *shareActivities;
@property (copy, nonatomic) NSArray *visibleShareActivities;
@property (copy, nonatomic) NSArray *actionActivities;
@property (copy, nonatomic) NSArray *visibleActionActivities;
@property (copy, nonatomic) NSDictionary *finalItemsByActivity;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasSameResults:(id)a0;
- (id)initWithJSONInfo:(id)a0;
- (id)initWithPlaceholderItems:(id)a0;
- (id)jsonInfo;
- (void)updateFromSnapshot:(id)a0;
- (void)updateWithDiscoveredShareActivities:(id)a0 visibleShareActivities:(id)a1 actionActivities:(id)a2 visibleActionActivities:(id)a3;
- (void)updateWithFinalItems:(id)a0 forActivityType:(id)a1;
- (void)updateWithPeopleSuggestionActivityTypes:(id)a0;

@end
