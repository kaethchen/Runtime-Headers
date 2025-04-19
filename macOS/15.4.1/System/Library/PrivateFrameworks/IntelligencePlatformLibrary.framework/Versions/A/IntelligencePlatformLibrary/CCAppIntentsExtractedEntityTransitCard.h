@class NSString;

@interface CCAppIntentsExtractedEntityTransitCard : CCItemMessage

@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) NSString *underName;
@property (readonly, nonatomic) NSString *number;
@property (readonly, nonatomic) NSString *issueDate;
@property (readonly, nonatomic) NSString *expirationDate;
@property (readonly, nonatomic) NSString *issuedBy;
@property (readonly, nonatomic) NSString *eventSubType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithProvider:(id)a0 underName:(id)a1 number:(id)a2 issueDate:(id)a3 expirationDate:(id)a4 issuedBy:(id)a5 eventSubType:(id)a6 error:(id *)a7;

@end
