@interface TVISReflectedMatrix : NSObject {
    char *_elements;
}

@property (readonly, nonatomic) unsigned long long size;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (unsigned char)elementAtIndexPath:(id)a0;
- (id)initWithLowerElements:(const char *)a0 length:(unsigned long long)a1;
- (id)initWithSize:(unsigned long long)a0 elements:(const char *)a1 error:(id *)a2;
- (BOOL)isEqualToMatrix:(id)a0;

@end
