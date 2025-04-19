@class NSMethodSignature, NSMutableArray;

@interface NSInvocation : NSObject {
    void *_frame;
    void *_retdata;
    NSMethodSignature *_signature;
    NSMutableArray *_container;
    BOOL *_replacedByPointerBacking;
    unsigned long long _pac_signature;
    unsigned int _magic;
    unsigned char _retainedArgs;
    unsigned char _stackAllocated;
}

@property (readonly, retain) NSMethodSignature *methodSignature;
@property (readonly) BOOL argumentsRetained;
@property id target;
@property SEL selector;

+ (id)_invocationWithMethodSignature:(id)a0 frame:(void *)a1;
+ (id)invocationWithMethodSignature:(id)a0;

- (id)debugDescription;
- (id)userInfo;
- (void)setUserInfo:(id)a0;
- (BOOL)_hasBlockArgument;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)getReturnValue:(void *)a0;
- (void)_addAttachedObject:(id)a0;
- (void)retainArguments;
- (void)invokeUsingIMP:(void /* function */ *)a0;
- (void)setReturnValue:(void *)a0;
- (void)getArgument:(void *)a0 atIndex:(long long)a1;
- (void)invoke;
- (void)invokeSuper;
- (void)invokeWithTarget:(id)a0;
- (void)setArgument:(void *)a0 atIndex:(long long)a1;

@end
