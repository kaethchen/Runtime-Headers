@interface FIAnalyticsOperationRecord : FIAnalyticsRecord

- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)validate;
- (id)initWithEventName:(id)a0;
- (void)setFileSystem:(unsigned long long)a0 forKey:(id)a1;
- (void)setItemType:(unsigned long long)a0;

@end
