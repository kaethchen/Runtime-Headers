@class JSOCType;

@interface JSOCPointer : NSObject

@property (readonly) void *pointerValue;
@property (readonly) JSOCType *type;

+ (void *)pointerValueForSymbolName:(id)a0;

- (void).cxx_destruct;
- (id)initWithPointerValue:(void *)a0 type:(id)a1;

@end
