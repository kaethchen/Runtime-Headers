@class NSString;
@protocol GEOConfigStorageReadWrite;

@interface _GEOConfigStorageLocalHelper : NSObject <GEOConfigStorageReadWrite> {
    long long _source;
    id<GEOConfigStorageReadWrite> _store;
    id<GEOConfigStorageReadWrite> _direct;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)getConfigValueForKey:(id)a0 countryCode:(id)a1 options:(unsigned long long)a2 source:(long long *)a3;
- (id)initWithSource:(long long)a0 store:(id)a1 directStore:(id)a2;
- (void)resync;
- (void)setConfigValue:(id)a0 forKey:(id)a1 options:(unsigned long long)a2 synchronous:(BOOL)a3;

@end
