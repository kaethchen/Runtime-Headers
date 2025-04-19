@class NSString;

@interface BMPhotosAutonamingSuggestionsFeedback : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int feedbackType;
@property (readonly, nonatomic) int associationType;
@property (readonly, nonatomic) NSString *feedbackId;
@property (readonly, nonatomic) NSString *visualId;
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
- (id)initWithFeedbackType:(int)a0 associationType:(int)a1;
- (id)initWithFeedbackType:(int)a0 associationType:(int)a1 feedbackId:(id)a2 visualId:(id)a3;

@end
