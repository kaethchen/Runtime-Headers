@class NSString;

@interface BMMailRecategorization : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int category;
@property (readonly, nonatomic) int previous;
@property (readonly, nonatomic) int scope;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *language;
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
- (id)initWithCategory:(int)a0 previous:(int)a1 scope:(int)a2 sender:(id)a3 domain:(id)a4 language:(id)a5;

@end
