@class NSString, NSArray;

@interface INSpeakableString : NSObject <INSpeakableStringExport, INSpeakable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *spokenPhrase;
@property (retain) NSString *pronunciationHint;
@property (retain) NSString *identifier;
@property (retain) NSString *vocabularyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *alternativeSpeakableMatches;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)length;
- (id)string;
- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_effectiveNSStringValue;
- (id)_initWithVocabularyIdentifier:(id)a0 spokenPhrase:(id)a1 pronunciationHint:(id)a2 alternativeMatches:(id)a3;
- (id)_intents_localizedCopyWithLocalizer:(id)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (id)initWithIdentifier:(id)a0 spokenPhrase:(id)a1 pronunciationHint:(id)a2;
- (id)initWithIdentifier:(id)a0 string:(id)a1;
- (id)initWithSpokenPhrase:(id)a0;
- (id)initWithVocabularyIdentifier:(id)a0 spokenPhrase:(id)a1 pronunciationHint:(id)a2;
- (id)spokenPhrases;

@end
