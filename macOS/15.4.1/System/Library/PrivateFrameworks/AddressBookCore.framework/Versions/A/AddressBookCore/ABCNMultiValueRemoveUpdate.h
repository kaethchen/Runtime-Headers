@class NSString;

@interface ABCNMultiValueRemoveUpdate : NSObject <ABCNMultiValueUpdate> {
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)applyToABMutableMultiValue:(id)a0 transform:(id /* block */)a1;
- (void)applyToMutableMultiValue:(id)a0 withIdentifierMap:(id)a1;

@end
