@class NSString, _INPBTask;

@interface _INPBSetTaskAttributeIntentResponse : PBCodable <_INPBSetTaskAttributeIntentResponse, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _warnings;
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBTask *modifiedTask;
@property (readonly, nonatomic) BOOL hasModifiedTask;
@property (readonly, nonatomic) int *warnings;
@property (readonly, nonatomic) unsigned long long warningsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsWarnings:(id)a0;
- (void)addWarnings:(int)a0;
- (void)clearWarnings;
- (void)setWarnings:(int *)a0 count:(unsigned long long)a1;
- (id)warningsAsString:(int)a0;
- (int)warningsAtIndex:(unsigned long long)a0;

@end
