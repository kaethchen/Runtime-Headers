@class NSString, NSDate;

@interface BMGenerativeExperiencesTransparencyLog : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *prompt;
@property (readonly, nonatomic) NSString *response;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) NSString *useCase;
@property (readonly, nonatomic) int errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) int executionEnvironment;
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
- (id)initWithTimestamp:(id)a0 identifier:(id)a1 prompt:(id)a2 response:(id)a3 model:(id)a4 modelVersion:(id)a5 useCase:(id)a6 errorCode:(id)a7 clientIdentifier:(id)a8 executionEnvironment:(int)a9;

@end
