@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {
    long long _sourceType;
    NSString *_sourceHost;
    NSString *_sourceOwner;
}

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)a0;
- (BOOL)_isLocalSource;
- (BOOL)_requiresHostAndOwner;
- (BOOL)_supportsConsistentExternalIDAcrossDevices;
- (BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)a0;
- (id)initWithSource:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)isMatchForSource:(id)a0;

@end
