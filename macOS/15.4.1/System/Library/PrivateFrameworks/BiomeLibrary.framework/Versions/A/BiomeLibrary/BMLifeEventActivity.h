@class NSString, BMLifeEventActivityActivitySource, NSArray, NSDate, BMLifeEventActivityMetadata;

@interface BMLifeEventActivity : BMEventBase <BMStoreData> {
    BOOL _hasRaw_startDate;
    double _raw_startDate;
    BOOL _hasRaw_endDate;
    double _raw_endDate;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int activityType;
@property (readonly, nonatomic) BMLifeEventActivityActivitySource *activitySource;
@property (readonly, nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (readonly, nonatomic) NSArray *members;
@property (readonly, nonatomic) BMLifeEventActivityMetadata *metadata;
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
- (id)_membersJSONArray;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 identifier:(id)a2 activityType:(int)a3 activitySource:(id)a4 confidence:(id)a5 members:(id)a6 metadata:(id)a7;

@end
