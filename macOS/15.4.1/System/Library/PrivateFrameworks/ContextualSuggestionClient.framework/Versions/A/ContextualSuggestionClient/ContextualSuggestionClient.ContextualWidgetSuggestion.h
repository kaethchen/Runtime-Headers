@class NSString;

@interface ContextualSuggestionClient.ContextualWidgetSuggestion : ContextualSuggestionClient.ContextualSuggestion {
    void /* unknown type, empty encoding */ extensionBundleIdentifier;
    void /* unknown type, empty encoding */ containerBundleIdentifier;
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ intent;
    void /* unknown type, empty encoding */ scoreSpecification;
    void /* unknown type, empty encoding */ blendingClientModelSpecification;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
