@interface _NSBlockDeallocationHook : NSObject {
    id /* block */ _block;
}

+ (id)withBlock:(id /* block */)a0;

- (void)dealloc;

@end
