@class NSData;

@interface NGMPBInnerMessage : PBCodable <NSCopying> {
    struct { unsigned char counter : 1; } _has;
}

@property (retain, nonatomic) NSData *message;
@property (nonatomic) BOOL hasCounter;
@property (nonatomic) unsigned int counter;
@property (readonly, nonatomic) BOOL hasKtGossipData;
@property (retain, nonatomic) NSData *ktGossipData;
@property (readonly, nonatomic) BOOL hasDebugInfo;
@property (retain, nonatomic) NSData *debugInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributes;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
