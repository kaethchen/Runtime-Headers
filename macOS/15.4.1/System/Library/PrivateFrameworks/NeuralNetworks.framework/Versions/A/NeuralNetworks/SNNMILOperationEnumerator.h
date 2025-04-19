@class SNNMILFunction;

@interface SNNMILOperationEnumerator : NSEnumerator {
    int _currentIndex;
}

@property (weak, nonatomic) SNNMILFunction *function;

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithFunction:(id)a0;

@end
