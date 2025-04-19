@class BMAppleIntelligenceAvailabilityUseCaseInfo, NSArray, NSString, NSDate;

@interface BMAppleIntelligenceAvailability : BMEventBase <BMStoreData> {
    BOOL _hasRaw_datePostedAppleIntelligenceCFU;
    double _raw_datePostedAppleIntelligenceCFU;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMAppleIntelligenceAvailabilityUseCaseInfo *appleIntelligenceUseCase;
@property (readonly, nonatomic) BMAppleIntelligenceAvailabilityUseCaseInfo *appleIntelligenceDiffusionUseCase;
@property (readonly, nonatomic) BOOL isAppleIntelligenceToggleEnabled;
@property (nonatomic) BOOL hasIsAppleIntelligenceToggleEnabled;
@property (readonly, nonatomic) BOOL hasEngagedWithAppleIntelligenceCFU;
@property (nonatomic) BOOL hasHasEngagedWithAppleIntelligenceCFU;
@property (readonly, nonatomic) NSDate *datePostedAppleIntelligenceCFU;
@property (readonly, nonatomic) NSArray *languages;
@property (readonly, nonatomic) int region;
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
- (id)_languagesJSONArray;
- (id)initWithAppleIntelligenceUseCase:(id)a0 appleIntelligenceDiffusionUseCase:(id)a1 isAppleIntelligenceToggleEnabled:(id)a2 hasEngagedWithAppleIntelligenceCFU:(id)a3 datePostedAppleIntelligenceCFU:(id)a4 languages:(id)a5 region:(int)a6;

@end
