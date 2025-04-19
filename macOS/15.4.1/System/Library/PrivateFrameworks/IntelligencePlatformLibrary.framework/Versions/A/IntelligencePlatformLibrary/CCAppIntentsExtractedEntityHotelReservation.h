@class NSString, NSArray;

@interface CCAppIntentsExtractedEntityHotelReservation : CCItemMessage

@property (readonly, nonatomic) NSString *hotelReservationForName;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) NSString *hotelReservationId;
@property (readonly, nonatomic) NSArray *customerNames;
@property (readonly, nonatomic) NSArray *roomNumbers;
@property (readonly, nonatomic) unsigned int numberOfRooms;
@property (nonatomic) BOOL hasNumberOfRooms;
@property (readonly, nonatomic) NSString *hotelReservationForAddress;
@property (readonly, nonatomic) NSString *hotelCheckinDate;
@property (readonly, nonatomic) NSString *hotelCheckinTime;
@property (readonly, nonatomic) NSString *hotelCheckoutDate;
@property (readonly, nonatomic) NSString *hotelCheckoutTime;
@property (readonly, nonatomic) NSString *hotelTimeZone;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) NSString *hotelReservationForTelephone;
@property (readonly, nonatomic) NSString *cost;
@property (readonly, nonatomic) NSString *costCode;
@property (readonly, nonatomic) NSString *eventStatus;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithHotelReservationForName:(id)a0 provider:(id)a1 hotelReservationId:(id)a2 customerNames:(id)a3 roomNumbers:(id)a4 numberOfRooms:(id)a5 hotelReservationForAddress:(id)a6 hotelCheckinDate:(id)a7 hotelCheckinTime:(id)a8 hotelCheckoutDate:(id)a9 hotelCheckoutTime:(id)a10 hotelTimeZone:(id)a11 duration:(id)a12 hotelReservationForTelephone:(id)a13 cost:(id)a14 costCode:(id)a15 eventStatus:(id)a16 error:(id *)a17;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
