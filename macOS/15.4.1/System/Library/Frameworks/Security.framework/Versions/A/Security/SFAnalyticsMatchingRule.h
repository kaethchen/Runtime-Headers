@class NSString, NSDictionary, NSDate, SECSFAEventRule;

@interface SFAnalyticsMatchingRule : NSObject

@property (retain) SECSFAEventRule *rule;
@property (retain) NSDictionary *matchingDictionary;
@property (retain) NSDate *lastMatch;
@property BOOL firstMatchArmed;
@property (retain) NSString *eventName;

+ (id)armKeyForEventName:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)armKey;
- (id)cachedMatchDictionary;
- (unsigned int)doAction:(id)a0 attributes:(id)a1 logger:(id)a2;
- (id)initWithSFARule:(id)a0 logger:(id)a1;
- (BOOL)isSubsetMatch:(id)a0 target:(id)a1;
- (id)lastMatchTimeKey;
- (BOOL)matchAttributes:(id)a0 eventClass:(long long)a1 processName:(id)a2 logger:(id)a3;
- (BOOL)valueMatch:(id)a0 target:(id)a1;

@end
