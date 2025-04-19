@interface ATXUserEducationSuggestionFocusModeSetup : ATXUserEducationSuggestion

@property (readonly, nonatomic) long long modeSemanticType;

+ (BOOL)supportsSecureCoding;
+ (long long)suggestionType;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModeSemanticType:(long long)a0;

@end
