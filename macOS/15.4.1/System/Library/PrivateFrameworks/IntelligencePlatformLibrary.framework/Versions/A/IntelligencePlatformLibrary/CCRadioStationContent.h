@class NSString;

@interface CCRadioStationContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *callSign;
@property (readonly, nonatomic) NSString *frequency;
@property (readonly, nonatomic) NSString *channel;
@property (readonly, nonatomic) unsigned int signalType;

+ (unsigned short)itemType;
+ (id)descriptionForTypeIdentifier:(unsigned short)a0;
+ (Class)contentMessageClass;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (void)enumerateFieldsUsingBlock:(id /* block */)a0 parentFieldType:(unsigned short)a1;
- (BOOL)initializeFieldValuesFromData:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 callSign:(id)a1 frequency:(id)a2 channel:(id)a3 signalType:(unsigned int)a4 error:(id *)a5;

@end
