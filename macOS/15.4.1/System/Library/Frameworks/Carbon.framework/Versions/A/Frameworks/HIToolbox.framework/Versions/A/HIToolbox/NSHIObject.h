@interface NSHIObject : NSObject {
    unsigned char buffer[24];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (oneway void)release;
- (BOOL)allowsWeakReference;
- (unsigned long long)hash;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (unsigned long long)_cfTypeID;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
