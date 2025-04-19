@class NSData;

@interface CSStingrayRecordClientMetadataICloudDataProtection : PBCodable <NSCopying> {
    struct { unsigned char icdp : 1; unsigned char icdpArmed : 1; unsigned char icdpDrop : 1; unsigned char icdpGF : 1; unsigned char icdpWalrus : 1; } _has;
}

@property (nonatomic) BOOL hasIcdp;
@property (nonatomic) BOOL icdp;
@property (nonatomic) BOOL hasIcdpArmed;
@property (nonatomic) BOOL icdpArmed;
@property (nonatomic) BOOL hasIcdpWalrus;
@property (nonatomic) BOOL icdpWalrus;
@property (nonatomic) BOOL hasIcdpDrop;
@property (nonatomic) BOOL icdpDrop;
@property (readonly, nonatomic) BOOL hasEscrowedKeys;
@property (retain, nonatomic) NSData *escrowedKeys;
@property (nonatomic) BOOL hasIcdpGF;
@property (nonatomic) BOOL icdpGF;
@property (readonly, nonatomic) BOOL hasWrappedKeys;
@property (retain, nonatomic) NSData *wrappedKeys;
@property (readonly, nonatomic) BOOL hasDerivedTokenID;
@property (retain, nonatomic) NSData *derivedTokenID;

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
