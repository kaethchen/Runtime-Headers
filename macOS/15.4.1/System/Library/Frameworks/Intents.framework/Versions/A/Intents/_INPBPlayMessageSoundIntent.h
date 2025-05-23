@class NSString, _INPBIntentMetadata;

@interface _INPBPlayMessageSoundIntent : PBCodable <_INPBPlayMessageSoundIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char soundType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSString *messageIdentifier;
@property (readonly, nonatomic) BOOL hasMessageIdentifier;
@property (nonatomic) int soundType;
@property (nonatomic) BOOL hasSoundType;
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
- (int)StringAsSoundType:(id)a0;
- (id)soundTypeAsString:(int)a0;

@end
