@interface ContextualSuggestionClient.ContextualSuggestionContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ representation;
    void /* unknown type, empty encoding */ suggestions;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
