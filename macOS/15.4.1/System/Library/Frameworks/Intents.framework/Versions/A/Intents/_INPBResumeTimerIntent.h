@class _INPBTimer, NSString, _INPBIntentMetadata;

@interface _INPBResumeTimerIntent : PBCodable <_INPBResumeTimerIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char resumeMultiple : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL resumeMultiple;
@property (nonatomic) BOOL hasResumeMultiple;
@property (retain, nonatomic) _INPBTimer *targetTimer;
@property (readonly, nonatomic) BOOL hasTargetTimer;
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

@end
