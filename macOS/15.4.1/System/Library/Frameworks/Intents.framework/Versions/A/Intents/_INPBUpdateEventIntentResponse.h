@class NSArray, _INPBCalendarEvent, NSString;

@interface _INPBUpdateEventIntentResponse : PBCodable <_INPBUpdateEventIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char confirmationReason : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int confirmationReason;
@property (nonatomic) BOOL hasConfirmationReason;
@property (copy, nonatomic) NSArray *conflictingEventIdentifiers;
@property (readonly, nonatomic) unsigned long long conflictingEventIdentifiersCount;
@property (retain, nonatomic) _INPBCalendarEvent *updatedEvent;
@property (readonly, nonatomic) BOOL hasUpdatedEvent;
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
- (int)StringAsConfirmationReason:(id)a0;
- (void)addConflictingEventIdentifiers:(id)a0;
- (void)clearConflictingEventIdentifiers;
- (id)confirmationReasonAsString:(int)a0;
- (id)conflictingEventIdentifiersAtIndex:(unsigned long long)a0;

@end
