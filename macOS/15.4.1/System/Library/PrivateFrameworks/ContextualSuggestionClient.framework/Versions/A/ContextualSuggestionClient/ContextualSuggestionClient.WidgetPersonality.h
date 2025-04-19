@class NSString;

@interface ContextualSuggestionClient.WidgetPersonality : NSObject <CHSWidgetPersonality> {
    void /* unknown type, empty encoding */ extensionBundleIdentifier;
    void /* unknown type, empty encoding */ kind;
}

@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) NSString *kind;

- (id)init;
- (void).cxx_destruct;
- (BOOL)matchesPersonality:(id)a0;

@end
