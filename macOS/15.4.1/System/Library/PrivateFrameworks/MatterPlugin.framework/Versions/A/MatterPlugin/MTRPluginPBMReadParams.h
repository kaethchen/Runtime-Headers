@class MTRReadParams, MTRPluginPBMVariableValue;

@interface MTRPluginPBMReadParams : PBCodable <NSCopying> {
    struct { unsigned char assumeUnknownAttributesReportable : 1; unsigned char filterByFabric : 1; } _has;
}

@property (retain, nonatomic) MTRReadParams *readParams;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) BOOL hasFilterByFabric;
@property (nonatomic) BOOL filterByFabric;
@property (nonatomic) BOOL hasAssumeUnknownAttributesReportable;
@property (nonatomic) BOOL assumeUnknownAttributesReportable;
@property (readonly, nonatomic) BOOL hasMinEventNumber;
@property (retain, nonatomic) MTRPluginPBMVariableValue *minEventNumber;

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
- (id)initWithReadParams:(id)a0;

@end
