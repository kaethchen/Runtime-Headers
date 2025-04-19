@class NSMutableString, NSKeyBindingManager, NSSortedArray, NSMutableArray;

@interface _NSKeyBindingStateActual : NSObject {
    NSKeyBindingManager *_currentInstance;
    NSSortedArray *_currentAtomArray;
    NSMutableString *_toInsert;
    long long _stateFlag;
    long long _repeatCount;
    NSMutableArray *_atomList;
}

@end
