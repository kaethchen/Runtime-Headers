@class NSString;

@interface BMSystemSettingsMultitasking : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL childAccount;
@property (nonatomic) BOOL hasChildAccount;
@property (readonly, nonatomic) BOOL firstUpdate;
@property (nonatomic) BOOL hasFirstUpdate;
@property (readonly, nonatomic) BOOL buddySetup;
@property (nonatomic) BOOL hasBuddySetup;
@property (readonly, nonatomic) BOOL buddySetupMultitaskingOff;
@property (nonatomic) BOOL hasBuddySetupMultitaskingOff;
@property (readonly, nonatomic) NSString *multitaskingOption;
@property (readonly, nonatomic) NSString *source;
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
- (id)initWithChildAccount:(id)a0 firstUpdate:(id)a1 buddySetup:(id)a2 buddySetupMultitaskingOff:(id)a3 multitaskingOption:(id)a4 source:(id)a5;

@end
