@class NSString, NSArray, NSDate;

@interface BMProactiveHarvestingQuery : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *query;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *contentProtection;
@property (readonly, nonatomic) NSString *personaId;
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
- (id)_resultsJSONArray;
- (id)initWithAbsoluteTimestamp:(id)a0 query:(id)a1 results:(id)a2 uniqueID:(id)a3 contentProtection:(id)a4 personaId:(id)a5;

@end
