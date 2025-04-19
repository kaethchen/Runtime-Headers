@interface PKContentVersionUtility : NSObject

+ (id)sharedUtility;

- (BOOL)programLinkedOnOrAfterDawnburst;
- (long long)contentVersionForCurrentSDK;
- (BOOL)programLinkedOnOrAfterDawnburstE;

@end
