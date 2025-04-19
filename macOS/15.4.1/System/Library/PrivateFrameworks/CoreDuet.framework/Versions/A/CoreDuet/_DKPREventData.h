@class NSData;

@interface _DKPREventData : PBCodable <NSCopying> {
    unsigned long long _uncompressedLength;
    NSData *_event;
    unsigned int _version;
    struct { unsigned char uncompressedLength : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
