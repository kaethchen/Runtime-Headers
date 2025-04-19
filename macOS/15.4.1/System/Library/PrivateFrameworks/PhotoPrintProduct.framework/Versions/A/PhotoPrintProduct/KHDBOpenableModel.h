@interface KHDBOpenableModel : KHDBUuidModel {
    unsigned long long _openChangesMask;
}

- (void)close;
- (void)open;
- (BOOL)isOpen;
- (void)setIsOpen:(BOOL)a0;
- (void)includeInOpenChanges:(unsigned long long)a0;
- (unsigned long long)setToClosed;

@end
