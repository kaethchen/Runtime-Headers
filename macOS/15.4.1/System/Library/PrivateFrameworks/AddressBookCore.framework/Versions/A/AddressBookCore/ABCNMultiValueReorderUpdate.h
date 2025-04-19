@class NSString, NSOrderedSet;

@interface ABCNMultiValueReorderUpdate : NSObject <ABCNMultiValueUpdate> {
    NSOrderedSet *_identifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithIdentifiers:(id)a0;
- (void)applyToABMutableMultiValue:(id)a0 transform:(id /* block */)a1;
- (void)applyToMutableMultiValue:(id)a0 withIdentifierMap:(id)a1;
- (long long)compareIndexOfIdentifier:(id)a0 toIndexOfIdentifier:(id)a1;

@end
