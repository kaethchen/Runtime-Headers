@class MTRPluginPBMCommandPath, MTRPluginPBMHeader, MTRPluginPBMDeviceNode, MTRPluginPBMVariableValueList, MTRPluginPBMVariableValue;

@interface MTRPluginPBMDeviceNodeInvokeCommmandMessage : PBCodable <NSCopying> {
    struct { unsigned char expectedValueInterval : 1; unsigned char serverSideProcessingTimeout : 1; unsigned char timedInvokeTimeout : 1; } _has;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) BOOL hasNode;
@property (retain, nonatomic) MTRPluginPBMDeviceNode *node;
@property (readonly, nonatomic) BOOL hasCommandPath;
@property (retain, nonatomic) MTRPluginPBMCommandPath *commandPath;
@property (readonly, nonatomic) BOOL hasCommandFields;
@property (retain, nonatomic) MTRPluginPBMVariableValue *commandFields;
@property (readonly, nonatomic) BOOL hasExpectedValues;
@property (retain, nonatomic) MTRPluginPBMVariableValueList *expectedValues;
@property (nonatomic) BOOL hasExpectedValueInterval;
@property (nonatomic) unsigned long long expectedValueInterval;
@property (nonatomic) BOOL hasTimedInvokeTimeout;
@property (nonatomic) unsigned long long timedInvokeTimeout;
@property (nonatomic) BOOL hasServerSideProcessingTimeout;
@property (nonatomic) unsigned long long serverSideProcessingTimeout;

+ (id)deviceNodeInvokeCommandMessageFromMessage:(id)a0;
+ (id)deviceNodeInvokeCommandMessageWithNodeID:(id)a0 invokeCommandWithEndpointID:(id)a1 clusterID:(id)a2 commandID:(id)a3 commandFields:(id)a4 expectedValues:(id)a5 expectedValueInterval:(id)a6 timedInvokeTimeout:(id)a7 serverSideProcessingTimeout:(id)a8;

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
