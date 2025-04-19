@interface KHSchemaVersion : KHModel {
    long long _version;
}

- (void)dealloc;
- (long long)version;
- (void)setVersion:(long long)a0;
- (void)cacheVersion:(long long)a0;

@end
