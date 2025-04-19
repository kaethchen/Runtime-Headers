@class _MRApplicationConnectionContextProtobuf, _MRApplicationConnectionRequestInfoProtobuf;

@interface _MRCreateApplicationConnectionMessageProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) _MRApplicationConnectionContextProtobuf *context;
@property (readonly, nonatomic) BOOL hasRequestInfo;
@property (retain, nonatomic) _MRApplicationConnectionRequestInfoProtobuf *requestInfo;

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
