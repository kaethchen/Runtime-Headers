@class NSString;

@interface ABCPbSummaryAttachmentRequest : PBRequest <NSCopying> {
    struct { unsigned char fileSize : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFileName;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) BOOL hasFileSize;
@property (nonatomic) unsigned int fileSize;

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
