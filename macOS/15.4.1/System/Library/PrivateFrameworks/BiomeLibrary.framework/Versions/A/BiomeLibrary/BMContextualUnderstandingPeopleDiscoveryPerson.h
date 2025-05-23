@class NSString;

@interface BMContextualUnderstandingPeopleDiscoveryPerson : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *contactID;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int flags;
@property (nonatomic) BOOL hasFlags;
@property (readonly, nonatomic) unsigned int activityLevel;
@property (nonatomic) BOOL hasActivityLevel;
@property (readonly, nonatomic) unsigned int proximity;
@property (nonatomic) BOOL hasProximity;
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
- (id)initWithContactID:(id)a0 identifier:(id)a1 name:(id)a2 flags:(id)a3 activityLevel:(id)a4 proximity:(id)a5;

@end
