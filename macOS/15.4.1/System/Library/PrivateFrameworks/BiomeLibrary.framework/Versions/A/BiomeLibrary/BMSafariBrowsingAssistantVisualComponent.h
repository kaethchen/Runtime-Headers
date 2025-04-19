@class BMSafariBrowsingAssistantVisualComponentAttribute, BMSafariBrowsingAssistantVisualComponentData, NSString;

@interface BMSafariBrowsingAssistantVisualComponent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMSafariBrowsingAssistantVisualComponentAttribute *visualComponentAttribute;
@property (readonly, nonatomic) BMSafariBrowsingAssistantVisualComponentData *visualComponentData;
@property (readonly, nonatomic) unsigned long long identifier;
@property (nonatomic) BOOL hasIdentifier;
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
- (id)initWithVisualComponentAttribute:(id)a0 visualComponentData:(id)a1 identifier:(id)a2;
- (id)initByReadFrom:(id)a0;

@end
