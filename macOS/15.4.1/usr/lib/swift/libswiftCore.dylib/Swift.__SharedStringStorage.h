@interface Swift.__SharedStringStorage : Swift.__SwiftNativeNSString <Swift._NSCopying> {
    void /* unknown type, empty encoding */ _owner;
    void /* unknown type, empty encoding */ start;
    void /* unknown type, empty encoding */ _countAndFlags;
    void /* unknown type, empty encoding */ _breadcrumbs;
    void /* unknown type, empty encoding */ immortal;
}

@property (nonatomic, readonly) long long length;
@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long fastestEncoding;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (const char *)UTF8String;
- (const char *)_fastCStringContents:(char)a0;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (unsigned short)characterAtIndex:(long long)a0;
- (char)getCString:(char *)a0 maxLength:(long long)a1 encoding:(unsigned long long)a2;
- (void)getCharacters:(unsigned short *)a0 range:(struct { long long x0; long long x1; })a1;
- (char)isEqualToString:(id)a0;

@end
