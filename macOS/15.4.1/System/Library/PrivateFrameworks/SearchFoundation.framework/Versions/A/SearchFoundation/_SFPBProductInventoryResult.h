@class NSString, NSArray, NSData;

@interface _SFPBProductInventoryResult : PBCodable <_SFPBProductInventoryResult, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSArray *availabilitys;
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
- (void)setAvailability:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)addAvailability:(id)a0;
- (id)availabilityAtIndex:(unsigned long long)a0;
- (unsigned long long)availabilityCount;
- (void)clearAvailability;

@end
