@class NSString, ABCNPropertyDescription;

@interface ABCNContactKeyValueUpdate : NSObject <ABCNContactUpdate> {
    ABCNPropertyDescription *_property;
    id _value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)property;
- (void)applyToABCDContact:(id)a0;
- (void)applyToABPerson:(id)a0;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (id)initWithProperty:(id)a0 value:(id)a1;

@end
