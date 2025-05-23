@interface AWDSafariPageLoadCompleteEvent : PBCodable <NSCopying> {
    struct { unsigned char configurationID : 1; unsigned char errorCode : 1; unsigned char pageID : 1; unsigned char pageLoadTime : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasConfigurationID;
@property (nonatomic) unsigned long long configurationID;
@property (nonatomic) BOOL hasPageID;
@property (nonatomic) unsigned long long pageID;
@property (nonatomic) BOOL hasPageLoadTime;
@property (nonatomic) unsigned long long pageLoadTime;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
