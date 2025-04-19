@interface OADTabStop : NSObject {
    unsigned char mAlign;
    int mPosition;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)position;
- (void)setPosition:(int)a0;
- (unsigned char)align;
- (void)setAlign:(unsigned char)a0;

@end
