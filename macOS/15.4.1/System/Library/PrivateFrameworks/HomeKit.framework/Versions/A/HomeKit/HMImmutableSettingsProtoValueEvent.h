@class HMImmutableSettingsProtoIntegerValueEvent, HMImmutableSettingsProtoStringValueEvent, HMImmutableSettingsProtoBoolValueEvent, HMImmutableSettingsProtoLanguageValueEvent;

@interface HMImmutableSettingsProtoValueEvent : PBCodable <NSCopying> {
    struct { unsigned char settingValueEvent : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasStringValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoStringValueEvent *stringValueEvent;
@property (readonly, nonatomic) BOOL hasIntegerValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoIntegerValueEvent *integerValueEvent;
@property (readonly, nonatomic) BOOL hasBoolValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoBoolValueEvent *boolValueEvent;
@property (readonly, nonatomic) BOOL hasLanguageValueEvent;
@property (retain, nonatomic) HMImmutableSettingsProtoLanguageValueEvent *languageValueEvent;
@property (nonatomic) BOOL hasSettingValueEvent;
@property (nonatomic) int settingValueEvent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSettingValueEvent:(id)a0;
- (void)clearOneofValuesForSettingValueEvent;
- (id)settingValueEventAsString:(int)a0;

@end
