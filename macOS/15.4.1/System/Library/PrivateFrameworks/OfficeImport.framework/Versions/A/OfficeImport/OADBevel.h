@interface OADBevel : NSObject <NSCopying> {
    int mType;
    float mWidth;
    float mHeight;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)setType:(int)a0;
- (int)type;
- (float)height;
- (void)setHeight:(float)a0;
- (void)setWidth:(float)a0;
- (float)width;

@end
