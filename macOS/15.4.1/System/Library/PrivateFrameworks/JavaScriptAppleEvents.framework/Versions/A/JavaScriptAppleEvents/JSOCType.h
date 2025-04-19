@class NSString;

@interface JSOCType : NSObject

@property (readonly) unsigned long long size;
@property (readonly) unsigned long long align;
@property (readonly) BOOL isVoid;
@property (readonly) BOOL isReference;
@property (readonly) BOOL isNumeric;
@property (readonly) BOOL isBoolean;
@property (readonly) BOOL isString;
@property (readonly) BOOL isObject;
@property (readonly) BOOL isClass;
@property (readonly) BOOL isSelector;
@property (readonly) BOOL isFunction;
@property (readonly) BOOL isBlock;
@property (readonly) BOOL isStruct;
@property (readonly) NSString *structTag;
@property (readonly) const char *objCType;
@property (readonly) const char *extendedObjCType;
@property (readonly) const char *objCTypes;
@property (readonly) struct _ffi_type { unsigned long long x0; unsigned short x1; unsigned short x2; struct _ffi_type **x3; } *ffiType;
@property (readonly) JSOCType *returnValueType;
@property (readonly) long long numberOfArguments;
@property (readonly) long long firstVisibleArgument;
@property (readonly) BOOL variadic;
@property (readonly) BOOL nullTerminated;
@property (readonly) JSOCType *ref;
@property (readonly) JSOCType *deref;

+ (id)class;
+ (id)selector;
+ (id)string;
+ (id)object;
+ (id)pointer;
+ (id)function;
+ (id)block;
+ (id)method;
+ (id)int64;
+ (id)boolean;
+ (id)blockWithReturnValueType:(id)a0 argumentTypes:(id)a1 variadic:(BOOL)a2 nullTerminated:(BOOL)a3;
+ (id)blockWithReturnValueTypeName:(id)a0 argumentTypeNames:(id)a1;
+ (id)double;
+ (id)float;
+ (id)functionWithReturnValueType:(id)a0 argumentTypes:(id)a1 variadic:(BOOL)a2 nullTerminated:(BOOL)a3;
+ (id)functionWithReturnValueTypeName:(id)a0 argumentTypeNames:(id)a1;
+ (id)int16;
+ (id)int32;
+ (id)int8;
+ (id)longdouble;
+ (id)methodWithReturnValueType:(id)a0 argumentTypes:(id)a1 variadic:(BOOL)a2 nullTerminated:(BOOL)a3;
+ (id)methodWithReturnValueTypeName:(id)a0 argumentTypeNames:(id)a1;
+ (id)structWithTag:(id)a0 properties:(id)a1;
+ (id)typeWithName:(id)a0;
+ (id)typeWithObjCType:(const char *)a0;
+ (id)typeWithObjCTypes:(const char *)a0;
+ (id)uint16;
+ (id)uint32;
+ (id)uint64;
+ (id)uint8;
+ (id)void;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)argumentTypeAtIndex:(long long)a0;
- (BOOL)isMethod;

@end
