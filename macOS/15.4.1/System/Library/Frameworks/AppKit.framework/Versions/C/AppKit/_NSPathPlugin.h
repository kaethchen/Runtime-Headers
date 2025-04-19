@interface _NSPathPlugin : _NSValueBinderPlugin

+ (BOOL)isUsableWithObject:(id)a0;

- (Class)_valueClass:(id)a0;
- (BOOL)acceptsMarker:(id)a0 binding:(id)a1 overrideWithPlaceholderIfDefined:(BOOL *)a2;
- (void)showValue:(id)a0 inObject:(id)a1;

@end
