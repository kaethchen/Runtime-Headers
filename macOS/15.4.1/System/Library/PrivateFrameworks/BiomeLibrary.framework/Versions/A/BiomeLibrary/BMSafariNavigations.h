@class NSString, NSDate;

@interface BMSafariNavigations : BMEventBase <BMStoreData> {
    BOOL _hasRaw_visited;
    double _raw_visited;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSDate *visited;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) int userAgent;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL privacyProxy;
@property (nonatomic) BOOL hasPrivacyProxy;
@property (readonly, nonatomic) int error;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *privateRelayVendorName;
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
- (id)initWithDomain:(id)a0 visited:(id)a1 platform:(int)a2 userAgent:(int)a3 countryCode:(id)a4 privacyProxy:(id)a5 error:(int)a6;
- (id)initWithDomain:(id)a0 visited:(id)a1 platform:(int)a2 userAgent:(int)a3 countryCode:(id)a4 privacyProxy:(id)a5 error:(int)a6 url:(id)a7;
- (id)initWithDomain:(id)a0 visited:(id)a1 platform:(int)a2 userAgent:(int)a3 countryCode:(id)a4 privacyProxy:(id)a5 error:(int)a6 url:(id)a7 privateRelayVendorName:(id)a8;
- (id)initByReadFrom:(id)a0;

@end
