@class _INPBDateTimeRange, _INPBAlarmSearch, _INPBAlarm, _INPBDataString, _INPBIntentMetadata, NSString;

@interface _INPBUpdateAlarmIntent : PBCodable <_INPBUpdateAlarmIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char operation : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBAlarm *alarm;
@property (readonly, nonatomic) BOOL hasAlarm;
@property (retain, nonatomic) _INPBAlarmSearch *alarmSearch;
@property (readonly, nonatomic) BOOL hasAlarmSearch;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int operation;
@property (nonatomic) BOOL hasOperation;
@property (retain, nonatomic) _INPBDataString *proposedLabel;
@property (readonly, nonatomic) BOOL hasProposedLabel;
@property (retain, nonatomic) _INPBDateTimeRange *proposedTime;
@property (readonly, nonatomic) BOOL hasProposedTime;
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
- (int)StringAsOperation:(id)a0;
- (id)operationAsString:(int)a0;

@end
