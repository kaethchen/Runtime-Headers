@class NSString, NSArray, NSData;

@interface _SFPBFlight : PBCodable <_SFPBFlight, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *flightID;
@property (copy, nonatomic) NSString *carrierCode;
@property (copy, nonatomic) NSString *carrierName;
@property (copy, nonatomic) NSString *flightNumber;
@property (copy, nonatomic) NSArray *legs;
@property (copy, nonatomic) NSString *operatorCarrierCode;
@property (copy, nonatomic) NSString *operatorFlightNumber;
@property (copy, nonatomic) NSString *carrierPhoneNumber;
@property (copy, nonatomic) NSString *carrierWebsite;
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
- (void)clearLegs;
- (id)initWithJSON:(id)a0;
- (unsigned long long)legsCount;
- (id)initWithFacade:(id)a0;
- (void)addLegs:(id)a0;
- (id)legsAtIndex:(unsigned long long)a0;

@end
