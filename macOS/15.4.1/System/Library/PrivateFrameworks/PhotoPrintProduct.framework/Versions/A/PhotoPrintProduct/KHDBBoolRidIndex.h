@interface KHDBBoolRidIndex : KHDBRidIndex

- (unsigned long long)count;
- (id)convertBoolValueToIndexKey:(BOOL)a0;
- (id)indexForBoolValue:(BOOL)a0;
- (id)indexForBoolValue:(BOOL)a0 createIfMissing:(BOOL)a1;
- (void)setIndex:(id)a0 forBoolValue:(BOOL)a1;
- (void)setReturnId:(unsigned long long)a0 forValue:(BOOL)a1;

@end
