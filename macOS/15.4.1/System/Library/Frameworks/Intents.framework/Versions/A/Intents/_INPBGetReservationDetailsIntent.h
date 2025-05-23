@class NSArray, NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBGetReservationDetailsIntent : PBCodable <_INPBGetReservationDetailsIntent, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *reservationContainerReference;
@property (readonly, nonatomic) BOOL hasReservationContainerReference;
@property (copy, nonatomic) NSArray *reservationItemReferences;
@property (readonly, nonatomic) unsigned long long reservationItemReferencesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)reservationItemReferencesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addReservationItemReferences:(id)a0;
- (void)clearReservationItemReferences;
- (id)reservationItemReferencesAtIndex:(unsigned long long)a0;

@end
