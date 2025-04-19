@class NSString;

@interface BMSystemSettingsAppearanceSetup : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *choice;
@property (readonly, nonatomic) BOOL childSetup;
@property (nonatomic) BOOL hasChildSetup;
@property (readonly, nonatomic) NSString *childChoice;
@property (readonly, nonatomic) unsigned int childAge;
@property (nonatomic) BOOL hasChildAge;
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
- (id)initWithChoice:(id)a0 childSetup:(id)a1 childChoice:(id)a2 childAge:(id)a3;

@end
