@class NSString, NSArray, INCodableLocalizationTable, NSDictionary;

@interface INCodableEnum : NSObject <INWidgetPlistRepresentable, NSSecureCoding, NSCopying, INCodableCoding> {
    NSDictionary *_valuesByIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setLocalizationTable:) INCodableLocalizationTable *_localizationTable;
@property (copy, nonatomic, setter=_setEnumNamespace:) NSString *enumNamespace;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *displayNameID;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, copy) NSString *localizedDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__INCodableEnumValueSynonymsKey;
+ (id)__DisplayNameIDKey;
+ (id)__DisplayNameKey;
+ (id)__INCodableEnumValueDisplayNameIDKey;
+ (id)__INCodableEnumValueDisplayNameKey;
+ (id)__INCodableEnumValueIndexKey;
+ (id)__INCodableEnumValueNameKey;
+ (id)__INCodableEnumValueSynonymPronunciationHintIDKey;
+ (id)__INCodableEnumValueSynonymPronunciationHintKey;
+ (id)__INCodableEnumValueSynonymSynonymIDKey;
+ (id)__INCodableEnumValueSynonymSynonymKey;
+ (id)__NameKey;
+ (id)__TypeKey;
+ (id)__ValuesKey;
+ (id)makeFromWidgetPlistableRepresentation:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)a0;
- (id)initWithName:(id)a0 displayName:(id)a1 displayNameID:(id)a2 enumNamespace:(id)a3 type:(long long)a4 values:(id)a5 localizationTable:(id)a6;
- (id)localizedDisplayNameWithLocalizer:(id)a0;
- (void)updateWithDictionary:(id)a0;
- (id)valueForIndex:(unsigned long long)a0;
- (id)valuesByIndexForValues:(id)a0;
- (id)widgetPlistableRepresentationWithParameters:(id)a0 error:(id *)a1;

@end
