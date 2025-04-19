@class MTRPluginPBMDeviceNode, MTRPluginPBMHeader;

@interface MTRPluginPBMDeviceNodeDownloadDiagnosticLog : PBCodable <NSCopying> {
    struct { unsigned char timeoutInterval : 1; unsigned char logType : 1; } _has;
}

@property (readonly, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) BOOL hasNode;
@property (retain, nonatomic) MTRPluginPBMDeviceNode *node;
@property (nonatomic) BOOL hasLogType;
@property (nonatomic) int logType;
@property (nonatomic) BOOL hasTimeoutInterval;
@property (nonatomic) double timeoutInterval;

+ (id)deviceNodeDownloadDiagnosticLogMessageFromMessage:(id)a0;
+ (id)deviceNodeDownloadDiagnosticLogOfType:(long long)a0 timeout:(double)a1 nodeID:(id)a2;
+ (id)urlFromResponsePayload:(id)a0 error:(id *)a1;

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
