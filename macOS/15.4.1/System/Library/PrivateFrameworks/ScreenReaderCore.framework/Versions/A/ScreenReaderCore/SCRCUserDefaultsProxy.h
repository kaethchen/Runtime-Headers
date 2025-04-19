@class NSString;

@interface SCRCUserDefaultsProxy : SCRCUserDefaultsBase {
    NSString *_prefix;
    NSString *_name;
    NSString *_key;
    NSString *_domain;
    NSString *_pdomain;
    BOOL _dirty;
    BOOL _profilable;
    id _data;
    long long _prefixLength;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)allKeys;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (id)valueForKey:(id)a0;
- (void)removeAllValues;
- (id)_longKeyForShortKey:(id)a0;
- (id)_shortKeyForLongKey:(id)a0;
- (id)exclusiveValueForKey:(id)a0;

@end
