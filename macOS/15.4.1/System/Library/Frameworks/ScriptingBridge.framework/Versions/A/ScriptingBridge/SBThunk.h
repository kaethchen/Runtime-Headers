@class NSString, NSMethodSignature;

@interface SBThunk : NSObject {
    NSString *_selector;
    NSMethodSignature *_signature;
}

+ (id)thunkWithElement:(id)a0 inDocument:(id)a1;
+ (id)thunksForElement:(id)a0 inDocument:(id)a1;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)selector;
- (id)signature;
- (void)invoke:(id)a0;
- (id)initWithElement:(id)a0 inDocument:(id)a1;

@end
