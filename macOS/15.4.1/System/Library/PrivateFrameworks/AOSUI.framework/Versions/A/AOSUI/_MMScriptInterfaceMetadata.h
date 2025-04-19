@class NSMutableDictionary;

@interface _MMScriptInterfaceMetadata : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_selectorMetadata;
}

@property (nonatomic, setter=_setCachingEnabledByDefault:) BOOL _cachingEnabledByDefault;

- (id)init;
- (void).cxx_destruct;
- (void)_setCachingEnabled:(BOOL)a0 forSelector:(SEL)a1;
- (BOOL)_cachingEnabledForSelector:(SEL)a0;
- (id)_explicitCachingEnabledForSelector:(SEL)a0;
- (id)_explicitMetadataForSelector:(SEL)a0;
- (id)_explicitNameForSelector:(SEL)a0;
- (id)_metadataForSelector:(SEL)a0;
- (id)_nameForSelector:(SEL)a0;
- (void)_setMetadata:(id)a0 forSelector:(SEL)a1;
- (void)_setName:(id)a0 forSelector:(SEL)a1;

@end
