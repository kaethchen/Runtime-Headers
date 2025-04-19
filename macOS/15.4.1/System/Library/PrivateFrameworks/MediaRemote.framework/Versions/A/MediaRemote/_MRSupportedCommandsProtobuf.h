@class NSMutableArray;

@interface _MRSupportedCommandsProtobuf : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *supportedCommands;

+ (Class)supportedCommandType;

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
- (void)addSupportedCommand:(id)a0;
- (void)clearSupportedCommands;
- (id)supportedCommandAtIndex:(unsigned long long)a0;
- (unsigned long long)supportedCommandsCount;

@end
