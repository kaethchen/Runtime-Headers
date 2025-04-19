@interface BiomeStreams.BMPoirotSchematizerShim : NSObject

+ (id)searchValueIn:(id)a0 withFieldNumber:(long long)a1 typeRawValue:(long long)a2 error:(id *)a3;
+ (id)searchValueIn:(id)a0 withFieldPath:(id)a1 typeRawValue:(long long)a2 error:(id *)a3;
+ (id)searchValuesIn:(id)a0 withFieldNumber:(long long)a1 typeRawValue:(long long)a2 error:(id *)a3;
+ (BOOL)setSQLiteValueIn:(id)a0 withFieldNumber:(long long)a1 typeRawValue:(long long)a2 convertedTypeRawValue:(long long)a3 sqliteContext:(void *)a4 error:(id *)a5;
+ (BOOL)setSQLiteValueIn:(id)a0 withFieldPath:(id)a1 typeRawValue:(long long)a2 convertedTypeRawValue:(long long)a3 sqliteContext:(void *)a4 error:(id *)a5;

- (id)init;

@end
