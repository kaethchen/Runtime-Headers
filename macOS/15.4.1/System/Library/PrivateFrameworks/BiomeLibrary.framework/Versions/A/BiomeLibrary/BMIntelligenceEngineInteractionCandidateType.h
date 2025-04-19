@class BMIntelligenceEngineInteractionToolType, NSString, BMIntelligenceEngineInteractionPlacemarkType, BMIntelligenceEngineInteractionSchemaType, BMIntelligenceEngineInteractionPersonType, BMIntelligenceEngineInteractionEmpty, BMIntelligenceEngineInteractionFileType, BMIntelligenceEngineInteractionAppType, BMIntelligenceEngineInteractionCustomType, BMIntelligenceEngineInteractionDeviceType;

@interface BMIntelligenceEngineInteractionCandidateType : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMIntelligenceEngineInteractionEmpty *unknown;
@property (readonly, nonatomic) BMIntelligenceEngineInteractionEmpty *primitive;
@property (readonly, nonatomic) BMIntelligenceEngineInteractionDeviceType *device;
@property (readonly, nonatomic) BMIntelligenceEngineInteractionSchemaType *schema;
@property (readonly, nonatomic) BMIntelligenceEngineInteractionToolType *tool;
@property (readonly, nonatomic) BMIntelligenceEngineInteractionAppType *app;
@property (readonly, nonatomic) BMIntelligenceEngineInteractionFileType *file;
@property (readonly, nonatomic) BMIntelligenceEngineInteractionPersonType *person;
@property (readonly, nonatomic) BMIntelligenceEngineInteractionPlacemarkType *placemark;
@property (readonly, nonatomic) BMIntelligenceEngineInteractionCustomType *custom;
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
- (id)initWithUnknown:(id)a0 primitive:(id)a1 device:(id)a2 schema:(id)a3 tool:(id)a4 app:(id)a5 file:(id)a6 person:(id)a7 placemark:(id)a8 custom:(id)a9;

@end
