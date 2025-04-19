@class CCAppIntentsExtractedEntityTicketedShow, CCAppIntentsExtractedEntityTransitCard, CCAppIntentsExtractedEntityAppointment, CCAppIntentsExtractedEntityMedicalInsuranceCard, CCAppIntentsExtractedEntityFlightReservation, CCAppIntentsExtractedEntityHotelReservation, CCAppIntentsExtractedEntityRestaurantReservation, CCAppIntentsExtractedEntityParty, CCAppIntentsExtractedEntityPersonalId, CCAppIntentsExtractedEntityBusinessMembershipCard, CCAppIntentsExtractedEntityRentalCarReservation, CCAppIntentsExtractedEntityTicketedTransportation;

@interface CCAppIntentsExtractedEntityContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) CCAppIntentsExtractedEntityFlightReservation *flightReservation;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityHotelReservation *hotelReservation;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityRestaurantReservation *restaurantReservation;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityRentalCarReservation *rentalCarReservation;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityTicketedTransportation *ticketedTransportation;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityTicketedShow *ticketedShow;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityAppointment *appointment;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityParty *party;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityPersonalId *personalId;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityMedicalInsuranceCard *medicalInsuranceCard;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityBusinessMembershipCard *businessMembershipCard;
@property (readonly, nonatomic) CCAppIntentsExtractedEntityTransitCard *transitCard;
@property (readonly, nonatomic) unsigned int entityType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithEntity:(id)a0 entityType:(unsigned int)a1 error:(id *)a2;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
