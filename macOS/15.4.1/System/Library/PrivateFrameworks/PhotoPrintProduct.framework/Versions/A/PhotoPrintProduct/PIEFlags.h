@class NSMutableSet;

@interface PIEFlags : NSObject {
    NSMutableSet *_flagKeys;
    NSMutableSet *_flags;
}

- (void)dealloc;
- (id)init;
- (void)setFlag:(long long)a0;
- (BOOL)isFlagSet:(long long)a0;
- (BOOL)unsetFlag:(long long)a0;

@end
