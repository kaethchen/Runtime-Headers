@class _MRApplicationConnectionContextProtobuf, _MRApplicationConnectionMessageProtobuf;

@interface _MRApplicationConnectionProtocolMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasApplicationMessage;
@property (retain, nonatomic) _MRApplicationConnectionMessageProtobuf *applicationMessage;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) _MRApplicationConnectionContextProtobuf *context;

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
