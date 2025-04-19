@class NSString;

@interface BMRemindersMiscategorizedGroceryItem : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *itemChanged;
@property (readonly, nonatomic) NSString *originalCategory;
@property (readonly, nonatomic) NSString *destinationCategory;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithItemChanged:(id)a0 originalCategory:(id)a1 destinationCategory:(id)a2 locale:(id)a3;
- (id)initWithItemChanged:(id)a0 originalCategory:(id)a1 destinationCategory:(id)a2;

@end
