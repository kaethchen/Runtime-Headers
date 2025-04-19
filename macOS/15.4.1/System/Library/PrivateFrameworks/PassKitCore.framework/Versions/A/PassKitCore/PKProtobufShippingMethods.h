@class NSMutableArray, PKProtobufShippingMethod;

@interface PKProtobufShippingMethods : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *methods;
@property (readonly, nonatomic) BOOL hasDefaultMethod;
@property (retain, nonatomic) PKProtobufShippingMethod *defaultMethod;

+ (Class)methodsType;

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
- (id)methodsAtIndex:(unsigned long long)a0;
- (void)addMethods:(id)a0;
- (void)clearMethods;
- (unsigned long long)methodsCount;

@end
