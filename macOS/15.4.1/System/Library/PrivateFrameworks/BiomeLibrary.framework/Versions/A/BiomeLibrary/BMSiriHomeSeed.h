@class NSUUID, NSString, NSData, NSDate;

@interface BMSiriHomeSeed : BMEventBase <BMStoreData> {
    NSData *_raw_homeIdentifier;
    NSData *_raw_seed;
    BOOL _hasRaw_effectiveFrom;
    double _raw_effectiveFrom;
    BOOL _hasRaw_createdOn;
    double _raw_createdOn;
    BOOL _hasRaw_adoptedOn;
    double _raw_adoptedOn;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *homeIdentifier;
@property (readonly, nonatomic) NSUUID *seed;
@property (readonly, nonatomic) NSDate *effectiveFrom;
@property (readonly, nonatomic) unsigned int validityDays;
@property (nonatomic) BOOL hasValidityDays;
@property (readonly, nonatomic) NSDate *createdOn;
@property (readonly, nonatomic) NSDate *adoptedOn;
@property (readonly, nonatomic) unsigned int switchedCount;
@property (nonatomic) BOOL hasSwitchedCount;
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
- (id)initWithHomeIdentifier:(id)a0 seed:(id)a1 effectiveFrom:(id)a2 validityDays:(id)a3 createdOn:(id)a4 adoptedOn:(id)a5 switchedCount:(id)a6;

@end
