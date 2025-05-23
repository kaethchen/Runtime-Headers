@class NSString;

@interface CNAutocompleteResultValue : NSObject

@property (copy, nonatomic) NSString *stringForHashingMemo;
@property (copy) NSString *address;
@property long long addressType;
@property (copy) NSString *instantMessageAddressService;
@property (copy) NSString *identifier;
@property (copy) NSString *label;

+ (id)normalizedAddressForValue:(id)a0;
+ (id)resultValueWithAddress:(id)a0 addressType:(long long)a1;
+ (id)resultValueWithAddress:(id)a0 addressType:(long long)a1 label:(id)a2;
+ (id)stringForHashingValue:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)addressExactlyMatchesSearchTerm:(id)a0;
- (id)addressTypeDescription;
- (id)stringForHashing;
- (id)stringForSorting;

@end
