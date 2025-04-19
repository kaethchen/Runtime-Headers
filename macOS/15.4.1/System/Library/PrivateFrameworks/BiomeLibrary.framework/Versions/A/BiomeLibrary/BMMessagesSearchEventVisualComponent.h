@class BMMessagesSearchEventSectionAttribute, NSString, BMMessagesSearchEventResultAttribute, BMMessagesSearchEventPageAttribute;

@interface BMMessagesSearchEventVisualComponent : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int componentType;
@property (readonly, nonatomic) BMMessagesSearchEventResultAttribute *resultAttribute;
@property (readonly, nonatomic) BMMessagesSearchEventSectionAttribute *sectionAttribute;
@property (readonly, nonatomic) BMMessagesSearchEventPageAttribute *pageAttribute;
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
- (id)initWithComponentType:(int)a0 resultAttribute:(id)a1 sectionAttribute:(id)a2 pageAttribute:(id)a3;

@end
