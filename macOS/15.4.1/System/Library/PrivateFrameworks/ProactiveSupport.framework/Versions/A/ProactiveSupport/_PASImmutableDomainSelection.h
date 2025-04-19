@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {
    NSSet *_domains;
}

- (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)containsDomain:(id)a0;
- (id)allDomains;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)isEqualToDomainSelection:(id)a0;

@end
