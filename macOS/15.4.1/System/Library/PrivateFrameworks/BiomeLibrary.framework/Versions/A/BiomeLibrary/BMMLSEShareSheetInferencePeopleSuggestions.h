@class NSString, NSArray;

@interface BMMLSEShareSheetInferencePeopleSuggestions : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *sourceBundleId;
@property (readonly, nonatomic) NSArray *peopleSuggestions;
@property (readonly, nonatomic) int responseType;
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
- (id)_peopleSuggestionsJSONArray;
- (id)initWithIdentifier:(id)a0 sourceBundleId:(id)a1 peopleSuggestions:(id)a2;
- (id)initWithIdentifier:(id)a0 sourceBundleId:(id)a1 peopleSuggestions:(id)a2 responseType:(int)a3;

@end
