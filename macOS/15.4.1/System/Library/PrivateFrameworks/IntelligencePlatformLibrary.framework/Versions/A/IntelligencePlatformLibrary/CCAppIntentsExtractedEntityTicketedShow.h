@class NSString, NSArray;

@interface CCAppIntentsExtractedEntityTicketedShow : CCItemMessage

@property (readonly, nonatomic) NSString *reservationID;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) NSArray *customerNames;
@property (readonly, nonatomic) NSString *startLocationName;
@property (readonly, nonatomic) NSString *startLocationAddress;
@property (readonly, nonatomic) NSArray *seatNumbers;
@property (readonly, nonatomic) NSString *startDate;
@property (readonly, nonatomic) NSString *startDateTimeZone;
@property (readonly, nonatomic) NSString *endDate;
@property (readonly, nonatomic) NSString *endDateTimeZone;
@property (readonly, nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) NSString *ticketType;
@property (readonly, nonatomic) NSString *link;
@property (readonly, nonatomic) NSString *cost;
@property (readonly, nonatomic) NSString *costCode;
@property (readonly, nonatomic) NSString *eventSubType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithReservationID:(id)a0 eventName:(id)a1 provider:(id)a2 customerNames:(id)a3 startLocationName:(id)a4 startLocationAddress:(id)a5 seatNumbers:(id)a6 startDate:(id)a7 startDateTimeZone:(id)a8 endDate:(id)a9 endDateTimeZone:(id)a10 duration:(id)a11 ticketType:(id)a12 link:(id)a13 cost:(id)a14 costCode:(id)a15 eventSubType:(id)a16 error:(id *)a17;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
