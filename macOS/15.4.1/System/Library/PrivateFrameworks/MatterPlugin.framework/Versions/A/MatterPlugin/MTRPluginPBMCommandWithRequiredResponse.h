@class MTRPluginPBMVariableValue, MTRPluginPBMCommandPath, MTRCommandWithRequiredResponse;

@interface MTRPluginPBMCommandWithRequiredResponse : PBCodable <NSCopying>

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) MTRCommandWithRequiredResponse *commandWithRequiredResponse;
@property (readonly, nonatomic) BOOL hasCommandPath;
@property (retain, nonatomic) MTRPluginPBMCommandPath *commandPath;
@property (readonly, nonatomic) BOOL hasCommandFields;
@property (retain, nonatomic) MTRPluginPBMVariableValue *commandFields;
@property (readonly, nonatomic) BOOL hasRequiredResponse;
@property (retain, nonatomic) MTRPluginPBMVariableValue *requiredResponse;

+ (id)commandWithRequiredResponse:(id)a0;
+ (id)commandWithRequiredResponseFromMessage:(id)a0;

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
