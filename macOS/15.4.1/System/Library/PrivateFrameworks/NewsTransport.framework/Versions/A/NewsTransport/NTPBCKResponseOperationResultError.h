@class NTPBCKResponseOperationResultErrorExtension, NSString, NTPBCKResponseOperationResultErrorClient, NTPBCKResponseOperationResultErrorServer;

@interface NTPBCKResponseOperationResultError : PBCodable <NSCopying> {
    struct { unsigned char retryAfterSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasClientError;
@property (retain, nonatomic) NTPBCKResponseOperationResultErrorClient *clientError;
@property (readonly, nonatomic) BOOL hasServerError;
@property (retain, nonatomic) NTPBCKResponseOperationResultErrorServer *serverError;
@property (readonly, nonatomic) BOOL hasExtensionError;
@property (retain, nonatomic) NTPBCKResponseOperationResultErrorExtension *extensionError;
@property (nonatomic) BOOL hasRetryAfterSeconds;
@property (nonatomic) int retryAfterSeconds;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) BOOL hasErrorKey;
@property (retain, nonatomic) NSString *errorKey;

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
