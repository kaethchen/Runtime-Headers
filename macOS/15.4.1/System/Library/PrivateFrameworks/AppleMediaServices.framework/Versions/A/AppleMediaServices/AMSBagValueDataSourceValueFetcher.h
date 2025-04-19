@class NSString, ACAccount;
@protocol AMSBagDataSourceProtocol;

@interface AMSBagValueDataSourceValueFetcher : NSObject <AMSBagValueFetching>

@property (readonly, nonatomic) unsigned long long valueType;
@property (readonly, nonatomic) ACAccount *account;
@property (weak, nonatomic) id<AMSBagDataSourceProtocol> dataSource;
@property (readonly, nonatomic) BOOL isLoaded;
@property (readonly, copy, nonatomic) NSString *key;

+ (id)_valueFromDictionary:(id)a0 forBagKey:(id)a1;

- (void).cxx_destruct;
- (id)_processedDefaultValuePromise:(id)a0;
- (id)initWithDataSource:(id)a0 key:(id)a1 valueType:(unsigned long long)a2 account:(id)a3;
- (void)loadWithCompletion:(id /* block */)a0;
- (void)processedDefaultValueWithCompletion:(id /* block */)a0;

@end
