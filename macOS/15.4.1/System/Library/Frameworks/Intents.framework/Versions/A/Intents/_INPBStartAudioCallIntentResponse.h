@class NSString, NSArray, _INPBCallMetrics;

@interface _INPBStartAudioCallIntentResponse : PBCodable <_INPBStartAudioCallIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char audioRoute : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int audioRoute;
@property (nonatomic) BOOL hasAudioRoute;
@property (retain, nonatomic) _INPBCallMetrics *metrics;
@property (readonly, nonatomic) BOOL hasMetrics;
@property (copy, nonatomic) NSString *status;
@property (readonly, nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSArray *targetContacts;
@property (readonly, nonatomic) unsigned long long targetContactsCount;
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
- (int)StringAsAudioRoute:(id)a0;
- (void)addTargetContacts:(id)a0;
- (id)audioRouteAsString:(int)a0;
- (void)clearTargetContacts;
- (id)targetContactsAtIndex:(unsigned long long)a0;

@end
