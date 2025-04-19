@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { unsigned char _inverted : 1; unsigned char _builtin : 1; unsigned char _isCF : 1; unsigned int _reserved : 29; } _flags;
}

- (BOOL)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (id)autorelease;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (BOOL)isEmpty;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (id)bitmapRepresentation;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (id)invertedSet;
- (BOOL)isSupersetOfSet:(id)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (id)replacementObjectForCoder:(id)a0;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (void)_expandInverted;
- (id)initWithSet:(id)a0 options:(unsigned long long)a1;

@end
