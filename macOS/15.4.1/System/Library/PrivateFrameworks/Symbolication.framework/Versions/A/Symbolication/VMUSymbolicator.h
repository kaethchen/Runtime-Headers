@interface VMUSymbolicator : NSObject {
    struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } _symbolicator;
}

+ (id)symbolicatorForPid:(int)a0;
+ (id)symbolicatorForTask:(unsigned int)a0;

- (void)dealloc;
- (id)initWithTask:(unsigned int)a0;
- (id)sourceInfoForAddress:(unsigned long long)a0;
- (id)symbolForAddress:(unsigned long long)a0;

@end
