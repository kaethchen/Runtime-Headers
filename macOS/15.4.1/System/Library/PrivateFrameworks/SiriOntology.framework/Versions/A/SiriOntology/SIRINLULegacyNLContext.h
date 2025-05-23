@class NSString, NSArray;

@interface SIRINLULegacyNLContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL dictationPrompt;
@property BOOL strictPrompt;
@property (retain, nonatomic) NSString *previousDomainName;
@property BOOL listenAfterSpeaking;
@property (retain, nonatomic) NSArray *renderedTexts;
@property BOOL fromPommes;
@property (nonatomic) int legacyContextSource;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictationPrompt:(BOOL)a0 strictPrompt:(BOOL)a1 previousDomainName:(id)a2 listenAfterSpeaking:(BOOL)a3;
- (id)initWithDictationPrompt:(BOOL)a0 strictPrompt:(BOOL)a1 previousDomainName:(id)a2 listenAfterSpeaking:(BOOL)a3 renderedTexts:(id)a4;
- (id)initWithDictationPrompt:(BOOL)a0 strictPrompt:(BOOL)a1 previousDomainName:(id)a2 listenAfterSpeaking:(BOOL)a3 renderedTexts:(id)a4 legacyContextSource:(int)a5;

@end
