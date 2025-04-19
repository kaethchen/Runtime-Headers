@class MTRPluginPBMHeader, MTRPluginPBMAttributePath, MTRPluginPBMDeviceNode, MTRPluginPBMVariableValue;

@interface MTRPluginPBMDeviceNodeWriteAttributeMessage : PBCodable <NSCopying> {
    struct { unsigned char expectedValueInterval : 1; unsigned char timedWriteTimeout : 1; } _has;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) MTRPluginPBMHeader *header;
@property (readonly, nonatomic) BOOL hasNode;
@property (retain, nonatomic) MTRPluginPBMDeviceNode *node;
@property (readonly, nonatomic) BOOL hasAttributePath;
@property (retain, nonatomic) MTRPluginPBMAttributePath *attributePath;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) MTRPluginPBMVariableValue *value;
@property (nonatomic) BOOL hasExpectedValueInterval;
@property (nonatomic) unsigned long long expectedValueInterval;
@property (nonatomic) BOOL hasTimedWriteTimeout;
@property (nonatomic) unsigned long long timedWriteTimeout;

+ (id)deviceNodeWriteAttributeMessageFromMessage:(id)a0;
+ (id)deviceNodeWriteAttributeMessageWithNodeID:(id)a0 endpointID:(id)a1 clusterID:(id)a2 attributeID:(id)a3 value:(id)a4 expectedValueInterval:(id)a5 timedWriteTimeout:(id)a6;

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
