@class NSString;

@interface BMPeopleSuggesterSuggestLessFeedback : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *derivedIdentifier;
@property (readonly, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *userIdentifier;
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
- (id)initWithIdentifier:(id)a0 bundleId:(id)a1 derivedIdentifier:(id)a2 conversationIdentifier:(id)a3 handle:(id)a4 contactIdentifier:(id)a5 itemIdentifier:(id)a6 groupIdentifier:(id)a7 deviceIdentifier:(id)a8 userIdentifier:(id)a9;
- (id)initByReadFrom:(id)a0;

@end
