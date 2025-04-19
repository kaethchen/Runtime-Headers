@class NSArray, NSMutableArray;

@interface MTRPluginPBMCommandWithRequiredResponses : PBCodable <NSCopying>

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) NSArray *commandWithRequiredResponses;
@property (retain, nonatomic) NSMutableArray *commandWithRequiredResponseValues;

+ (Class)commandWithRequiredResponseValueType;
+ (id)commandWithRequiredResponses:(id)a0;
+ (id)commandWithRequiredResponsesFromMessage:(id)a0;

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
- (void)addCommandWithRequiredResponseValue:(id)a0;
- (void)clearCommandWithRequiredResponseValues;
- (id)commandWithRequiredResponseValueAtIndex:(unsigned long long)a0;
- (unsigned long long)commandWithRequiredResponseValuesCount;

@end
