@class NSString, ABCNMultiValueDiff, ABCNPropertyDescription;

@interface ABCNContactMultiValueDiffUpdate : NSObject <ABCNContactUpdate> {
    ABCNPropertyDescription *_property;
    ABCNMultiValueDiff *_diff;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)property;
- (void)applyToABCDContact:(id)a0;
- (void)applyToABPerson:(id)a0;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (id)initWithProperty:(id)a0 diff:(id)a1;
- (id)mutableMultiValueOnContact:(id)a0;

@end
