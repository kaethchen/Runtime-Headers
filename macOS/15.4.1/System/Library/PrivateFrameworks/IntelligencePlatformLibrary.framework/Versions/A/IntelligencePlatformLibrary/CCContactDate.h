@class NSString;

@interface CCContactDate : CCItemMessage

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned int year;
@property (nonatomic) BOOL hasYear;
@property (readonly, nonatomic) unsigned int month;
@property (nonatomic) BOOL hasMonth;
@property (readonly, nonatomic) unsigned int day;
@property (nonatomic) BOOL hasDay;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithLabel:(id)a0 year:(id)a1 month:(id)a2 day:(id)a3 error:(id *)a4;

@end
