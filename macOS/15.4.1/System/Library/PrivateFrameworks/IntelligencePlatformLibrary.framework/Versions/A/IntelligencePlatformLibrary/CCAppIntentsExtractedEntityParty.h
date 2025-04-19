@class NSString;

@interface CCAppIntentsExtractedEntityParty : CCItemMessage

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSString *startLocationName;
@property (readonly, nonatomic) NSString *startAddress;
@property (readonly, nonatomic) NSString *startDate;
@property (readonly, nonatomic) NSString *startDateTimeZone;
@property (readonly, nonatomic) NSString *endDate;
@property (readonly, nonatomic) NSString *endDateTimeZone;
@property (readonly, nonatomic) NSString *link;
@property (readonly, nonatomic) NSString *eventSubType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithEventName:(id)a0 startLocationName:(id)a1 startAddress:(id)a2 startDate:(id)a3 startDateTimeZone:(id)a4 endDate:(id)a5 endDateTimeZone:(id)a6 link:(id)a7 eventSubType:(id)a8 error:(id *)a9;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;

@end
