@class NSSet;

@interface PIESubsequenceSliceParams : NSObject

@property (readonly) id userInfo;
@property (readonly) NSSet *validHoleCounts;
@property (readonly) unsigned long long sliceCount;

- (void)dealloc;
- (id)initWithValidHoleCounts:(id)a0 sliceCount:(unsigned long long)a1 userInfo:(id)a2;
- (id)initWithValidHoleCounts:(id)a0 userInfo:(id)a1;
- (BOOL)isValidHoleCount:(unsigned long long)a0;
- (id)sortedValidHoleCounts;

@end
