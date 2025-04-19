@class NSString, NSArray;

@interface CCAppIntentsExtractedEntityRentalCarReservation : CCItemMessage

@property (readonly, nonatomic) NSString *reservationID;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) NSArray *customerNames;
@property (readonly, nonatomic) NSString *startLocationName;
@property (readonly, nonatomic) NSString *startLocationAddress;
@property (readonly, nonatomic) NSString *startLocationTelephone;
@property (readonly, nonatomic) NSString *startDate;
@property (readonly, nonatomic) NSString *startDateTimeZone;
@property (readonly, nonatomic) NSString *endLocationName;
@property (readonly, nonatomic) NSString *endLocationAddress;
@property (readonly, nonatomic) NSString *endLocationTelephone;
@property (readonly, nonatomic) NSString *endDate;
@property (readonly, nonatomic) NSString *endDateTimeZone;
@property (readonly, nonatomic) NSString *reservationForName;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
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
- (id)initWithReservationID:(id)a0 eventName:(id)a1 provider:(id)a2 customerNames:(id)a3 startLocationName:(id)a4 startLocationAddress:(id)a5 startLocationTelephone:(id)a6 startDate:(id)a7 startDateTimeZone:(id)a8 endLocationName:(id)a9 endLocationAddress:(id)a10 endLocationTelephone:(id)a11 endDate:(id)a12 endDateTimeZone:(id)a13 reservationForName:(id)a14 duration:(id)a15 cost:(id)a16 costCode:(id)a17 eventStatus:(id)a18 error:(id *)a19;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
