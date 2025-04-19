@class NSString, TIKeyboardInputManagerState, TIKeyboardIntermediateText, NSDictionary, NSArray;

@interface TIKeyboardConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) TIKeyboardInputManagerState *inputManagerState;
@property (retain, nonatomic) TIKeyboardIntermediateText *intermediateText;
@property (copy, nonatomic) NSString *layoutTag;
@property (copy, nonatomic) NSString *accentKeyString;
@property (copy, nonatomic) NSDictionary *contextualDisplayKeys;
@property (nonatomic) BOOL assertDefaultKeyPlane;
@property (retain, nonatomic) NSArray *multilingualLanguages;
@property (copy, nonatomic) NSDictionary *trialParameters;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
