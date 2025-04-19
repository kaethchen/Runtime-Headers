@class NSString;

@interface BMSpringBoardPillLaunch : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL childAccount;
@property (nonatomic) BOOL hasChildAccount;
@property (readonly, nonatomic) BOOL firstUpdate;
@property (nonatomic) BOOL hasFirstUpdate;
@property (readonly, nonatomic) BOOL firstUpdateAnyGesture;
@property (nonatomic) BOOL hasFirstUpdateAnyGesture;
@property (readonly, nonatomic) NSString *gesture;
@property (readonly, nonatomic) BOOL pillClicked;
@property (nonatomic) BOOL hasPillClicked;
@property (readonly, nonatomic) unsigned int totalTimesShown;
@property (nonatomic) BOOL hasTotalTimesShown;
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
- (id)initWithChildAccount:(id)a0 firstUpdate:(id)a1 firstUpdateAnyGesture:(id)a2 gesture:(id)a3 pillClicked:(id)a4 totalTimesShown:(id)a5;

@end
