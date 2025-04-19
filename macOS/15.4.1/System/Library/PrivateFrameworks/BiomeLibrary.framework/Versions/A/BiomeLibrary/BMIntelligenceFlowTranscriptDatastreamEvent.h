@class BMIntelligenceFlowIdentifiers, BMMonotonicTimestamp, NSString, NSDate, NSData;

@interface BMIntelligenceFlowTranscriptDatastreamEvent : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) BMMonotonicTimestamp *monotonicTimestamp;
@property (readonly, nonatomic) BMIntelligenceFlowIdentifiers *identifiers;
@property (readonly, nonatomic) NSString *eventId;
@property (readonly, nonatomic) NSString *eventType;
@property (readonly, nonatomic) NSData *data;
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
- (id)initWithAbsoluteTimestamp:(id)a0 monotonicTimestamp:(id)a1 identifiers:(id)a2 eventId:(id)a3 eventType:(id)a4 data:(id)a5;

@end
