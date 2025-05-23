@interface EDProtection : NSObject <NSCopying> {
    BOOL mHidden;
    BOOL mLocked;
}

+ (id)protectionWithHidden:(BOOL)a0 locked:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isHidden;
- (BOOL)isLocked;
- (id)initWithHidden:(BOOL)a0 locked:(BOOL)a1;
- (BOOL)isEqualToProtection:(id)a0;

@end
