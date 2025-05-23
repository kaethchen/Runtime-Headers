@class NSString, _INPBIntentMetadata;

@interface _INPBSetAudioSourceInCarIntent : PBCodable <_INPBSetAudioSourceInCarIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char audioSource : 1; unsigned char relativeAudioSourceReference : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int audioSource;
@property (nonatomic) BOOL hasAudioSource;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int relativeAudioSourceReference;
@property (nonatomic) BOOL hasRelativeAudioSourceReference;
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
- (int)StringAsAudioSource:(id)a0;
- (int)StringAsRelativeAudioSourceReference:(id)a0;
- (id)audioSourceAsString:(int)a0;
- (id)relativeAudioSourceReferenceAsString:(int)a0;

@end
