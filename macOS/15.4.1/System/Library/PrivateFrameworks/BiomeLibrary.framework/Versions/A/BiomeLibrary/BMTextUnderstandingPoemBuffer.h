@class NSString, NSArray, NSDate;

@interface BMTextUnderstandingPoemBuffer : BMEventBase <BMStoreData> {
    BOOL _hasRaw_messageTimestamp;
    double _raw_messageTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *messageTimestamp;
@property (readonly, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) NSString *spotlightId;
@property (readonly, nonatomic) BOOL photoAttachment;
@property (nonatomic) BOOL hasPhotoAttachment;
@property (readonly, nonatomic) NSArray *extractions;
@property (readonly, nonatomic) NSArray *continuousFeatures;
@property (readonly, nonatomic) NSString *rawMessage;
@property (readonly, nonatomic) NSString *senderId;
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
- (id)_continuousFeaturesJSONArray;
- (id)_extractionsJSONArray;
- (id)initWithMessageTimestamp:(id)a0 conversationId:(id)a1 spotlightId:(id)a2 photoAttachment:(id)a3 extractions:(id)a4 continuousFeatures:(id)a5 rawMessage:(id)a6;
- (id)initWithMessageTimestamp:(id)a0 conversationId:(id)a1 spotlightId:(id)a2 photoAttachment:(id)a3 extractions:(id)a4 continuousFeatures:(id)a5 rawMessage:(id)a6 senderId:(id)a7;

@end
