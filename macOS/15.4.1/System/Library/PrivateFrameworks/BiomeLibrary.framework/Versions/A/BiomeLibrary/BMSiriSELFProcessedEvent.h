@class NSUUID, NSString, NSData, BMSiriSELFProcessedEventComponentIdentifier, BMSiriSELFProcessedEventLogicalTimestamp;

@interface BMSiriSELFProcessedEvent : BMEventBase <BMStoreData> {
    NSData *_raw_messageUuid;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BMSiriSELFProcessedEventLogicalTimestamp *logicalTimestamp;
@property (readonly, nonatomic) BMSiriSELFProcessedEventComponentIdentifier *clusterRepresentativeId;
@property (readonly, nonatomic) BMSiriSELFProcessedEventComponentIdentifier *componentId;
@property (readonly, nonatomic) int anyEventType;
@property (nonatomic) BOOL hasAnyEventType;
@property (readonly, nonatomic) int innerType;
@property (nonatomic) BOOL hasInnerType;
@property (readonly, nonatomic) NSUUID *messageUuid;
@property (readonly, nonatomic) NSData *eventData;
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
- (id)initWithLogicalTimestamp:(id)a0 clusterRepresentativeId:(id)a1 componentId:(id)a2 anyEventType:(id)a3 innerType:(id)a4 messageUuid:(id)a5 eventData:(id)a6;

@end
