@class NSString;

@interface WBSSharedFeatureAvailability : NSObject

@property (class, nonatomic, setter=setLocalSiriSuggestionsEnabled:) BOOL areLocalSiriSuggestionsEnabled;
@property (class, readonly, nonatomic) BOOL areSiriSearchSuggestionsEnabled;
@property (class, readonly, nonatomic) NSString *safariApplicationPlatformBundleIdentifier;

@end
