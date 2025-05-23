@class NSArray, _INPBStartCallRequestMetadata, NSString, _INPBIntentMetadata;

@interface _INPBStartVideoCallIntent : PBCodable <_INPBStartVideoCallIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char audioRoute : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int audioRoute;
@property (nonatomic) BOOL hasAudioRoute;
@property (retain, nonatomic) _INPBStartCallRequestMetadata *callRequestMetadata;
@property (readonly, nonatomic) BOOL hasCallRequestMetadata;
@property (copy, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) unsigned long long contactsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (copy, nonatomic) NSArray *targetContacts;
@property (readonly, nonatomic) unsigned long long targetContactsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)contactType;
+ (Class)targetContactsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addContact:(id)a0;
- (int)StringAsAudioRoute:(id)a0;
- (id)contactAtIndex:(unsigned long long)a0;
- (void)addTargetContacts:(id)a0;
- (id)audioRouteAsString:(int)a0;
- (void)clearContacts;
- (void)clearTargetContacts;
- (id)targetContactsAtIndex:(unsigned long long)a0;

@end
