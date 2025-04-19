@class NSString;

@interface ATXPBContextHeuristicsEvent : PBCodable <NSCopying> {
    struct { unsigned char isStart : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasContextName;
@property (retain, nonatomic) NSString *contextName;
@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
@property (readonly, nonatomic) BOOL hasContextType;
@property (retain, nonatomic) NSString *contextType;

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
