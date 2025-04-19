@interface SPKDictionaryQuery : SPKQuery

+ (void)enableDictionary:(BOOL)a0;
+ (BOOL)isQuerySupported:(unsigned long long)a0;
+ (unsigned int)searchDomain;

- (void)start;
- (BOOL)needsIO;
- (BOOL)isDictionaryQuery;

@end
