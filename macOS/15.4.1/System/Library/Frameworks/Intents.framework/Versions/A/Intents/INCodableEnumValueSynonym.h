@class NSString, INCodableEnumValue, INCodableEnum;

@interface INCodableEnumValueSynonym : NSObject <INWidgetPlistRepresentable, NSSecureCoding, NSCopying, INCodableCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic, setter=_setCodableEnumValue:) INCodableEnumValue *_codableEnumValue;
@property (readonly, weak, nonatomic) INCodableEnum *_codableEnum;
@property (copy, nonatomic) NSString *pronunciationHint;
@property (copy, nonatomic) NSString *pronunciationHintLocID;
@property (copy, nonatomic) NSString *synonym;
@property (copy, nonatomic) NSString *synonymLocID;
@property (readonly, copy) NSString *localizedSynonym;
@property (readonly, copy) NSString *localizedPronunciationHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)__INCodableEnumPronunciationHintIDKey;
- (id)__INCodableEnumPronunciationHintKey;
- (id)__INCodableEnumSynonymIDKey;
- (id)__INCodableEnumSynonymKey;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)localizedPronunciationHintForLanguage:(id)a0;
- (id)localizedPronunciationHintWithLocalizer:(id)a0;
- (id)localizedSynonymForLanguage:(id)a0;
- (id)localizedSynonymWithLocalizer:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;

@end
