@class NSString;

@interface HMImmutableSettingsProtoLanguageValueEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasInputLanguageCode;
@property (retain, nonatomic) NSString *inputLanguageCode;
@property (readonly, nonatomic) BOOL hasOutputVoiceLanguageCode;
@property (retain, nonatomic) NSString *outputVoiceLanguageCode;
@property (readonly, nonatomic) BOOL hasOutputVoiceGenderCode;
@property (retain, nonatomic) NSString *outputVoiceGenderCode;
@property (readonly, nonatomic) BOOL hasVoiceName;
@property (retain, nonatomic) NSString *voiceName;

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
