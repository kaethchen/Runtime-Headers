@class NSArray, NSData, NSString;

@interface VISOperatingPointsCollection : PBCodable <VISOperatingPointsCollection, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *points;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPoints:(id)a0;
- (void)clearPoints;
- (id)initWithJSON:(id)a0;
- (id)pointsAtIndex:(unsigned long long)a0;
- (unsigned long long)pointsCount;

@end
