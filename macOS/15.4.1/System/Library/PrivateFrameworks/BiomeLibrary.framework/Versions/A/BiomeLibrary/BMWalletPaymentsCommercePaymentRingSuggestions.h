@class NSString;

@interface BMWalletPaymentsCommercePaymentRingSuggestions : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) int accountState;
@property (readonly, nonatomic) int paidUsingRing;
@property (readonly, nonatomic) int lastPaymentCategory;
@property (readonly, nonatomic) int paymentAction;
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
- (id)initWithAccountState:(int)a0 paidUsingRing:(int)a1 lastPaymentCategory:(int)a2 paymentAction:(int)a3;

@end
