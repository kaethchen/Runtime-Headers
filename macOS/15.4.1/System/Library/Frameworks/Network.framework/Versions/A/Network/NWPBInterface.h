@class NSString;

@interface NWPBInterface : PBCodable <NSCopying> {
    unsigned int _delegateIndex;
    unsigned int _generation;
    unsigned int _index;
    unsigned int _mtu;
    NSString *_name;
    int _subtype;
    int _type;
    BOOL _expensive;
    struct { unsigned char delegateIndex : 1; unsigned char generation : 1; unsigned char index : 1; unsigned char mtu : 1; unsigned char subtype : 1; unsigned char type : 1; unsigned char expensive : 1; } _has;
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
