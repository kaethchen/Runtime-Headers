@class NSArray, NSString;
@protocol AMSBagValueFetching;

@interface AMSBagValue : NSObject

@property (retain, nonatomic) NSArray *transformBlocks;
@property (nonatomic) unsigned long long valueType;
@property (readonly, nonatomic) id<AMSBagValueFetching> valueFetcher;
@property (readonly, getter=isLoaded) BOOL loaded;
@property (readonly) NSString *key;

+ (BOOL)_value:(id)a0 isKindOfValueType:(unsigned long long)a1;
+ (id)bagValueWithKey:(id)a0 valueType:(unsigned long long)a1 valuePromise:(id)a2;
+ (id)failingBagValueWithKey:(id)a0 valueType:(unsigned long long)a1 error:(id)a2;
+ (id)frozenBagValueWithKey:(id)a0 value:(id)a1 valueType:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)valueWithError:(id *)a0;
- (void)_applyTransformsToValue:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
- (id)initWithDataSource:(id)a0 key:(id)a1 valueType:(unsigned long long)a2;
- (id)initWithDataSource:(id)a0 key:(id)a1 valueType:(unsigned long long)a2 account:(id)a3;
- (id)initWithFetcher:(id)a0 valueType:(unsigned long long)a1;
- (id)transformWithBlock:(id /* block */)a0;
- (id)valuePromise;
- (void)valueWithCompletion:(id /* block */)a0;

@end
