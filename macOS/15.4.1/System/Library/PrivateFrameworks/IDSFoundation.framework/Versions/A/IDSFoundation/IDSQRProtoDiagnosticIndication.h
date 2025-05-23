@class NSString;

@interface IDSQRProtoDiagnosticIndication : PBCodable <NSCopying> {
    struct { unsigned char txnId : 1; unsigned char packetsRecordDuration : 1; } _has;
}

@property (retain, nonatomic) NSString *failureSubtype;
@property (retain, nonatomic) NSString *failureSubtypeContext;
@property (nonatomic) BOOL hasPacketsRecordDuration;
@property (nonatomic) unsigned int packetsRecordDuration;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;

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
