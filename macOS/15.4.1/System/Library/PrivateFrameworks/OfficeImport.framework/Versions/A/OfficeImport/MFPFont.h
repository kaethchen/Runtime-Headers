@class NSString;

@interface MFPFont : NSObject {
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)setSize:(float)a0;
- (unsigned int)flags;
- (float)size;
- (int)unit;
- (void)setFlags:(unsigned int)a0;
- (void)setUnit:(int)a0;
- (struct __CTFont { } *)createCTFontWithGraphics:(id)a0;

@end
