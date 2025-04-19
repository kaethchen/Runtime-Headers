@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection {
    NSMutableDictionary *_domains;
    unsigned long long _count;
    BOOL _taintedByDeepDomain;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (unsigned long long)count;
- (BOOL)containsDomain:(id)a0;
- (BOOL)addDomainsFromSet:(id)a0;
- (id)allDomains;
- (BOOL)addDomain:(id)a0;
- (BOOL)_addDomainsFromOtherDictionary:(id)a0 toOwnDictionary:(id)a1 ownDictionaryIsPlaceholder:(BOOL)a2;
- (BOOL)_addDomainsFrom:(id)a0;
- (void)_decrementCountAndMaybePruneItems:(id)a0;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)addDomainsFromArray:(id)a0;
- (BOOL)addDomainsFromSelection:(id)a0;
- (BOOL)isEqualToDomainSelection:(id)a0;

@end
