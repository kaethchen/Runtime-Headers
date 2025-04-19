@class NSString, NSArray;

@interface CCAppIntentsExtractedEntityRestaurantReservation : CCItemMessage

@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) NSString *reservationID;
@property (readonly, nonatomic) NSArray *customerNames;
@property (readonly, nonatomic) unsigned int restaurantPartySize;
@property (nonatomic) BOOL hasRestaurantPartySize;
@property (readonly, nonatomic) NSString *startLocationName;
@property (readonly, nonatomic) NSString *startLocationAddress;
@property (readonly, nonatomic) NSString *startLocationTelephone;
@property (readonly, nonatomic) NSString *startDate;
@property (readonly, nonatomic) NSString *startDateTimeZone;
@property (readonly, nonatomic) NSString *restaurantMealType;
@property (readonly, nonatomic) NSString *eventStatus;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithProvider:(id)a0 reservationID:(id)a1 customerNames:(id)a2 restaurantPartySize:(id)a3 startLocationName:(id)a4 startLocationAddress:(id)a5 startLocationTelephone:(id)a6 startDate:(id)a7 startDateTimeZone:(id)a8 restaurantMealType:(id)a9 eventStatus:(id)a10 error:(id *)a11;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
