@class HMImmutableSettingsProtoIntegerValueEvent;

@interface HMImmutableSettingsProtoBoundedIntegerSettingEvent : PBCodable <NSCopying> {
    struct { unsigned char maxValue : 1; unsigned char minValue : 1; unsigned char stepValue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HMImmutableSettingsProtoIntegerValueEvent *value;
@property (nonatomic) BOOL hasMinValue;
@property (nonatomic) long long minValue;
@property (nonatomic) BOOL hasMaxValue;
@property (nonatomic) long long maxValue;
@property (nonatomic) BOOL hasStepValue;
@property (nonatomic) long long stepValue;

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

@end
