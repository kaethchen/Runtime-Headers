@class NSString;

@interface BMWalletPaymentsCommerceRecurringSendSuggestions : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int userSelection;
@property (readonly, nonatomic) int passType;
@property (readonly, nonatomic) double tagClickDate;
@property (nonatomic) BOOL hasTagClickDate;
@property (readonly, nonatomic) int frequency;
@property (readonly, nonatomic) int suggestionsRange;
@property (readonly, nonatomic) int dayRange;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithUserSelection:(int)a0 passType:(int)a1 tagClickDate:(id)a2 frequency:(int)a3 suggestionsRange:(int)a4 dayRange:(int)a5;

@end
