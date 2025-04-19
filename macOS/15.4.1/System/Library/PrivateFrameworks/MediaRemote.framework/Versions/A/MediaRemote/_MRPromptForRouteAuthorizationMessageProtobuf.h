@class _MRAVOutputDeviceDescriptorProtobuf;

@interface _MRPromptForRouteAuthorizationMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char inputType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRoute;
@property (retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *route;
@property (nonatomic) BOOL hasInputType;
@property (nonatomic) int inputType;

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
- (int)StringAsInputType:(id)a0;
- (id)inputTypeAsString:(int)a0;

@end
