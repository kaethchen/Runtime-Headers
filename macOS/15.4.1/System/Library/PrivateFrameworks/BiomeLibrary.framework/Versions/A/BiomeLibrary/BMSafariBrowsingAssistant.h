@class BMSafariBrowsingAssistantWebpageUrlSent, BMSafariBrowsingAssistantVisualComponentPresentationContext, BMSafariBrowsingAssistantServerRequestContext, NSString, BMSafariBrowsingAssistantWebpageViewStarted, BMSafariBrowsingAssistantUserInteractionDetected, BMSafariBrowsingAssistantDimensionContext, BMSafariBrowsingAssistantBloomFilterPassed, BMSafariBrowsingAssistantEligible;

@interface BMSafariBrowsingAssistant : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMSafariBrowsingAssistantWebpageViewStarted *webpageViewStarted;
@property (readonly, nonatomic) BMSafariBrowsingAssistantDimensionContext *dimensionContext;
@property (readonly, nonatomic) BMSafariBrowsingAssistantBloomFilterPassed *bloomFilterPassed;
@property (readonly, nonatomic) BMSafariBrowsingAssistantEligible *eligible;
@property (readonly, nonatomic) BMSafariBrowsingAssistantWebpageUrlSent *webpageUrlSent;
@property (readonly, nonatomic) BMSafariBrowsingAssistantServerRequestContext *serverRequestContext;
@property (readonly, nonatomic) BMSafariBrowsingAssistantVisualComponentPresentationContext *visualComponentPresentationContext;
@property (readonly, nonatomic) BMSafariBrowsingAssistantUserInteractionDetected *userInteractionDetected;
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
- (id)initWithWebpageViewStarted:(id)a0 dimensionContext:(id)a1 bloomFilterPassed:(id)a2 eligible:(id)a3 webpageUrlSent:(id)a4 serverRequestContext:(id)a5 visualComponentPresentationContext:(id)a6 userInteractionDetected:(id)a7;
- (id)initByReadFrom:(id)a0;

@end
