@class NSArray;

@interface ABCNMultiValueDiff : NSObject {
    NSArray *_updates;
}

+ (id)emptyDiff;

- (void)dealloc;
- (id)description;
- (BOOL)isEmpty;
- (id)initWithUpdates:(id)a0;
- (void)applyToABMutableMultiValue:(id)a0 transform:(id /* block */)a1;
- (id)multiValueByApplyToMultiValue:(id)a0 withIdentifierMap:(id)a1;

@end
