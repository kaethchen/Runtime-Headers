@interface PBMutableData : NSMutableData {
    char *p;
    char *buffer;
    char *end;
}

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithCapacity:(unsigned long long)a0;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;

@end
