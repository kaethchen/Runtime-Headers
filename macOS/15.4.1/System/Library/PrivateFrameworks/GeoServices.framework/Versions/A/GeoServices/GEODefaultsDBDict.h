@interface GEODefaultsDBDict : GEODefaultsDBCollection

+ (id)dbValue:(id)a0;

- (unsigned long long)count;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
