@class NSArray, NSDictionary, NSDate;

@interface AMSLookupResult : AMSURLResult {
    NSDictionary *_response;
}

@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSArray *allItems;

- (void).cxx_destruct;
- (id)valueForProperty:(id)a0;
- (void)_enumerateItemsWithBlock:(id /* block */)a0;
- (id)appStoreURLWithReason:(long long)a0 initialIndex:(long long)a1;
- (id)initWithResult:(id)a0 dictionary:(id)a1;
- (id)itemForKey:(id)a0;

@end
