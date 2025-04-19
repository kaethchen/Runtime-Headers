@interface WFFinderConvertImageContextualAction : WFContextualAction

- (id)init;
- (id)_staticDisplayStringForDecoding;
- (void)configureIfNeededForContext:(id)a0 completion:(id /* block */)a1;
- (id)copyWithFormat:(unsigned long long)a0 resizeSize:(unsigned long long)a1 preserveMetadata:(BOOL)a2;

@end
