@class NSString, NSData;

@interface NTPBCKResponseOperationResultErrorExtension : PBCodable <NSCopying> {
    struct { unsigned char typeCode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExtensionName;
@property (retain, nonatomic) NSString *extensionName;
@property (nonatomic) BOOL hasTypeCode;
@property (nonatomic) unsigned int typeCode;
@property (readonly, nonatomic) BOOL hasExtensionPayload;
@property (retain, nonatomic) NSData *extensionPayload;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
