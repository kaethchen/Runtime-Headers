@class NSMutableDictionary;

@interface SecSFAParsedCollection : NSObject

@property (retain) NSMutableDictionary *matchingRules;
@property (retain) NSMutableDictionary *allowedEvents;
@property BOOL excludedVersion;

- (void).cxx_destruct;

@end
