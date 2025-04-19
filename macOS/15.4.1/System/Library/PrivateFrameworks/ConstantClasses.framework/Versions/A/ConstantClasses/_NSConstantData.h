@interface _NSConstantData : NSData

+ (id)alloc;

- (oneway void)release;
- (void)dealloc;
- (id)retain;
- (unsigned long long)retainCount;
- (unsigned long long)length;
- (const void *)bytes;

@end
