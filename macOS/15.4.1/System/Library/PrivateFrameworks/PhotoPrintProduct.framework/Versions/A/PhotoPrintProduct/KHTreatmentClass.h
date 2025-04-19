@class NSString;

@interface KHTreatmentClass : KHModel {
    NSString *_name;
    long long _active;
}

- (void)dealloc;
- (id)name;
- (void)setName:(id)a0;
- (long long)active;
- (void)setActive:(long long)a0;
- (void)cacheActive:(long long)a0;
- (void)cacheName:(id)a0;

@end
