@interface OADEffect : NSObject <NSCopying> {
    int mType;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (id)initWithType:(int)a0;
- (void)setStyleColor:(id)a0;

@end
