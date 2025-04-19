@interface CRKConcreteFeatureFlags : NSObject <CRKFeatureFlags>

@property (readonly, nonatomic, getter=isDataSeparationEnabled) BOOL dataSeparationEnabled;
@property (readonly, nonatomic, getter=isASMUserCachingEnabled) BOOL ASMUserCachingEnabled;
@property (readonly, nonatomic, getter=isSettingsEnhancedSearchEnabled) BOOL settingsEnhancedSearch;
@property (readonly, nonatomic, getter=isZeroKeywordSearchEnabled) BOOL ZeroKeywordSearchEnabled;
@property (readonly, nonatomic, getter=areAppGroupsEnabled) BOOL appGroupsEnabled;

@end
