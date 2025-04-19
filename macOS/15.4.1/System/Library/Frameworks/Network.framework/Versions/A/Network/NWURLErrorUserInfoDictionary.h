@class NWURLError;

@interface NWURLErrorUserInfoDictionary : NSDictionary

@property (retain, nonatomic) NWURLError *error;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (id)initWithError:(id)a0;

@end
