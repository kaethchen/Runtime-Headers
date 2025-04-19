@class AFVoiceCommandGrammarParsePackage, AFVoiceCommandDebugInfo;

@interface AFSpeechInfoPackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage;
@property (readonly, copy, nonatomic) AFVoiceCommandDebugInfo *debugInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCommandGrammarParsePackage:(id)a0;
- (id)initWithCommandGrammarParsePackage:(id)a0 debugInfo:(id)a1;

@end
