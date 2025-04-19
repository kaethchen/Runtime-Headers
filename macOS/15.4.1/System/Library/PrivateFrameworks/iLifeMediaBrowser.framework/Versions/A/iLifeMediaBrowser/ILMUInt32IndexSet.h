@class NSMutableIndexSet;

@interface ILMUInt32IndexSet : NSObject {
    NSMutableIndexSet *mLowIndexSet;
    NSMutableIndexSet *mMidIndexSet;
    NSMutableIndexSet *mHighIndexSet;
}

+ (id)indexSet;

- (void)dealloc;
- (id)init;
- (void)addIndex:(unsigned long long)a0;
- (BOOL)containsIndex:(unsigned long long)a0;
- (unsigned long long)count;

@end
