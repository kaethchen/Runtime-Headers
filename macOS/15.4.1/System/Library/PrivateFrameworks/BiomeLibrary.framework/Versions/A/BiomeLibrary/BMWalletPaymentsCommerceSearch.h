@class NSString;

@interface BMWalletPaymentsCommerceSearch : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int tagSource;
@property (readonly, nonatomic) int tagType;
@property (readonly, nonatomic) int passType;
@property (readonly, nonatomic) double tagClickDate;
@property (nonatomic) BOOL hasTagClickDate;
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
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithTagSource:(int)a0 tagType:(int)a1 passType:(int)a2 tagClickDate:(id)a3;

@end
