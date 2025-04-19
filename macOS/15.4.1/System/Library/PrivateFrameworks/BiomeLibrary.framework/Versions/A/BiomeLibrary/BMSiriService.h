@class NSString;

@interface BMSiriService : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int dismissalReason;
@property (readonly, nonatomic) BOOL unintended;
@property (nonatomic) BOOL hasUnintended;
@property (readonly, nonatomic) int requestSource;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *command;
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
- (id)initWithDismissalReason:(int)a0 unintended:(id)a1 requestSource:(int)a2 identifier:(id)a3 domain:(id)a4 command:(id)a5;
- (id)initByReadFrom:(id)a0;
- (id)initWithDismissalReason:(int)a0 unintended:(id)a1 requestSource:(int)a2;

@end
