@class NSString, _INPBIntentSlotValue;

@interface _INPBSelectionItem : PBCodable <_INPBSelectionItem, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) _INPBIntentSlotValue *value;
@property (readonly, nonatomic) BOOL hasValue;
@property (copy, nonatomic) NSString *vocabularyValue;
@property (readonly, nonatomic) BOOL hasVocabularyValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
