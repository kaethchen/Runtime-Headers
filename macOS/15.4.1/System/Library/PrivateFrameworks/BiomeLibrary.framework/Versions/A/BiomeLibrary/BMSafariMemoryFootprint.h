@class NSString, NSDate;

@interface BMSafariMemoryFootprint : BMEventBase <BMStoreData> {
    BOOL _hasRaw_visited;
    double _raw_visited;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSDate *visited;
@property (readonly, nonatomic) int footprint;
@property (readonly, nonatomic) int pageCount;
@property (readonly, nonatomic) int lifetime;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL inForeground;
@property (nonatomic) BOOL hasInForeground;
@property (readonly, nonatomic) BOOL privacyProxy;
@property (nonatomic) BOOL hasPrivacyProxy;
@property (readonly, nonatomic) BOOL canSuspend;
@property (nonatomic) BOOL hasCanSuspend;
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
- (id)initWithDomain:(id)a0 visited:(id)a1 footprint:(int)a2 pageCount:(int)a3 lifetime:(int)a4 countryCode:(id)a5 inForeground:(id)a6 privacyProxy:(id)a7 canSuspend:(id)a8;
- (id)initByReadFrom:(id)a0;

@end
