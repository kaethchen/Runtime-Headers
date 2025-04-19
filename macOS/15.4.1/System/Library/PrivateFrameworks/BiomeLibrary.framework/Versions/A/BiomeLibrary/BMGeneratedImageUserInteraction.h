@class NSString, NSUUID, NSData, NSDate;

@interface BMGeneratedImageUserInteraction : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
    NSData *_raw_identifier;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *prompt;
@property (readonly, nonatomic) int tokenLength;
@property (nonatomic) BOOL hasTokenLength;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *topic;
@property (readonly, nonatomic) int usage;
@property (nonatomic) BOOL hasUsage;
@property (readonly, nonatomic) NSString *userInterfaceLanguage;
@property (readonly, nonatomic) NSString *userSetRegionFormat;
@property (readonly, nonatomic) int personalization;
@property (readonly, nonatomic) int result;
@property (readonly, nonatomic) int feature;
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
- (id)initWithTimestamp:(id)a0 prompt:(id)a1 tokenLength:(id)a2 identifier:(id)a3 topic:(id)a4 usage:(id)a5 userInterfaceLanguage:(id)a6 userSetRegionFormat:(id)a7 personalization:(int)a8 result:(int)a9 feature:(int)a10;

@end
