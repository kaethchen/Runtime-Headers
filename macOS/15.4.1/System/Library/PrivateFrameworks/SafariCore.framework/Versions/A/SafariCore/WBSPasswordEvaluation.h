@class NSString, NSArray, WBSPasswordPatternMatch, NSDictionary;

@interface WBSPasswordEvaluation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSArray *patternMatches;
@property (readonly, nonatomic) long long evaluationType;
@property (readonly, nonatomic) double guessesRequired;
@property (readonly, nonatomic) unsigned long long strength;
@property (readonly, nonatomic) BOOL userShouldBeShownPassiveWarning;
@property (readonly, nonatomic) BOOL userShouldBeShownActiveWarning;
@property (readonly, nonatomic) WBSPasswordPatternMatch *bestPatternMatchForUserFeedback;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithEvaluationType:(long long)a0 password:(id)a1 patternMatches:(id)a2 guessesRequired:(double)a3;
- (id)_bestPatternMatchOfType:(unsigned long long)a0;
- (id)_passwordFeedbackStringWithPasswordVisibility:(unsigned long long)a0;
- (BOOL)_shouldShowUserFeedbackStringsForWordListPatternMatch:(id)a0;
- (unsigned long long)_userFeedbackLengthScoreForPatternMatch:(id)a0;
- (id)compactDescriptionWithPasswordColumnWidth:(unsigned long long)a0 includePatternMatches:(BOOL)a1;
- (id)userFeedbackStringWithPasswordVisibility:(unsigned long long)a0;

@end
