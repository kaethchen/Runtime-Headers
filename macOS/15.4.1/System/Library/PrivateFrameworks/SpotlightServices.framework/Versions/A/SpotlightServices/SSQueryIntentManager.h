@interface SSQueryIntentManager : NSObject

+ (BOOL)isEnabled;
+ (id)applySectionPolicyForQueryContext:(id)a0 sections:(id)a1;
+ (void)setQueryIntentForQueryContext:(id)a0 sections:(id)a1 topHitSection:(id)a2 rankingInfo:(id)a3;
+ (BOOL)isServerResult:(id)a0;
+ (BOOL)_demoteParsecForIntent:(id)a0 section:(id)a1 config:(id)a2;
+ (id)_determineIntentAndStrength:(id)a0;
+ (id)_getParsecMapsDetailedIdentifier:(id)a0;
+ (BOOL)_hasMapsPOIResults:(id)a0;
+ (id)_intentForQueryContext:(id)a0 sections:(id)a1 topHitSection:(id)a2;
+ (int)_intentForSection:(id)a0 withTopHit:(BOOL)a1;
+ (BOOL)_isJaJP:(id)a0;
+ (BOOL)_isParsecSection:(id)a0;
+ (int)_nextSectionModeling:(id)a0;
+ (int)_postRetrievalModeling:(id)a0;
+ (int)_prefixLengthModeling:(id)a0;
+ (void)_prepareSectionInformation:(id)a0 intentHelper:(id)a1 topHitSection:(id)a2;
+ (int)_queryUnderstandingModeling:(id)a0 intentHelper:(id)a1;
+ (int)_ruleBasedIntent:(id)a0;
+ (id)_sectionConfigurationForIntentType:(id)a0 sections:(id)a1 config:(id)a2;
+ (id)_suggestionConfigurationForIntent:(id)a0 queryContext:(id)a1 config:(id)a2;
+ (id)_suggestionConfigurationOverrideForQueryContext:(id)a0 config:(id)a1;
+ (BOOL)isPhotosRelatedIntent:(int)a0;

@end
