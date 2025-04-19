@class NSMutableDictionary;

@interface TMDictionaryConfiguration : TMConfiguration

@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain) NSMutableDictionary *keyValueStorage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)rawValueForKey:(id)a0;
- (void)setRawValue:(id)a0 forKey:(id)a1;

@end
