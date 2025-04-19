@class NSString;

@interface BMPBTombstoneEvent : PBCodable <NSCopying> {
    double _eventTimestamp;
    unsigned int _length;
    unsigned int _offset;
    NSString *_policyID;
    NSString *_processName;
    int _reason;
    NSString *_segmentName;
    struct { unsigned char eventTimestamp : 1; unsigned char length : 1; unsigned char offset : 1; unsigned char reason : 1; } _has;
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
