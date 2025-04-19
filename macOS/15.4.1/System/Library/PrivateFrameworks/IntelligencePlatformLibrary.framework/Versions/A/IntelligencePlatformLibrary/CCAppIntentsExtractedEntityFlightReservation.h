@class NSString, NSArray;

@interface CCAppIntentsExtractedEntityFlightReservation : CCItemMessage

@property (readonly, nonatomic) NSString *flightDesignator;
@property (readonly, nonatomic) NSString *flightConfirmationNumber;
@property (readonly, nonatomic) NSString *flightCarrier;
@property (readonly, nonatomic) NSString *flightCarrierCode;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) NSArray *customerNames;
@property (readonly, nonatomic) NSString *flightDepartureDateTime;
@property (readonly, nonatomic) NSString *flightDepartureTimeZone;
@property (readonly, nonatomic) NSString *flightBoardingDateTime;
@property (readonly, nonatomic) NSString *flightDepartureAirportCode;
@property (readonly, nonatomic) NSString *flightDepartureAirportName;
@property (readonly, nonatomic) NSString *flightDepartureAirportAddress;
@property (readonly, nonatomic) NSString *flightDepartureAirportLocality;
@property (readonly, nonatomic) NSString *flightDepartureAirportRegion;
@property (readonly, nonatomic) NSString *flightDepartureAirportPostalCode;
@property (readonly, nonatomic) NSString *flightDepartureAirportCountry;
@property (readonly, nonatomic) NSString *flightDepartureTerminal;
@property (readonly, nonatomic) NSString *flightDepartureGate;
@property (readonly, nonatomic) NSArray *seatNumbers;
@property (readonly, nonatomic) NSString *flightArrivalDateTime;
@property (readonly, nonatomic) NSString *flightArrivalTimeZone;
@property (readonly, nonatomic) NSString *flightArrivalAirportCode;
@property (readonly, nonatomic) NSString *flightArrivalAirportName;
@property (readonly, nonatomic) NSString *flightArrivalAirportAddress;
@property (readonly, nonatomic) NSString *flightArrivalAirportLocality;
@property (readonly, nonatomic) NSString *flightArrivalAirportRegion;
@property (readonly, nonatomic) NSString *flightArrivalAirportPostalCode;
@property (readonly, nonatomic) NSString *flightArrivalAirportCountry;
@property (readonly, nonatomic) NSString *flightArrivalTerminal;
@property (readonly, nonatomic) NSString *flightArrivalGate;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) NSString *flightCheckInUrl;
@property (readonly, nonatomic) NSString *cost;
@property (readonly, nonatomic) NSString *costCurrencyCode;
@property (readonly, nonatomic) NSString *flightNumber;
@property (readonly, nonatomic) NSString *eventStatus;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithFlightDesignator:(id)a0 flightConfirmationNumber:(id)a1 flightCarrier:(id)a2 flightCarrierCode:(id)a3 provider:(id)a4 customerNames:(id)a5 flightDepartureDateTime:(id)a6 flightDepartureTimeZone:(id)a7 flightBoardingDateTime:(id)a8 flightDepartureAirportCode:(id)a9 flightDepartureAirportName:(id)a10 flightDepartureAirportAddress:(id)a11 flightDepartureAirportLocality:(id)a12 flightDepartureAirportRegion:(id)a13 flightDepartureAirportPostalCode:(id)a14 flightDepartureAirportCountry:(id)a15 flightDepartureTerminal:(id)a16 flightDepartureGate:(id)a17 seatNumbers:(id)a18 flightArrivalDateTime:(id)a19 flightArrivalTimeZone:(id)a20 flightArrivalAirportCode:(id)a21 flightArrivalAirportName:(id)a22 flightArrivalAirportAddress:(id)a23 flightArrivalAirportLocality:(id)a24 flightArrivalAirportRegion:(id)a25 flightArrivalAirportPostalCode:(id)a26 flightArrivalAirportCountry:(id)a27 flightArrivalTerminal:(id)a28 flightArrivalGate:(id)a29 duration:(id)a30 flightCheckInUrl:(id)a31 cost:(id)a32 costCurrencyCode:(id)a33 flightNumber:(id)a34 eventStatus:(id)a35 error:(id *)a36;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
