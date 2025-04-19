@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {
    NSString *mName;
    NSMutableArray *mAlternateNames;
    int mFontFamily;
    int mCharacterSet;
    int mPitch;
}

+ (int)cpFontClassFromWdFontFamily:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)setName:(id)a0;
- (id)alternateNames;
- (int)characterSet;
- (int)pitch;
- (void)setPitch:(int)a0;
- (int)fontFamily;
- (void)setFontFamily:(int)a0;
- (void)setCharacterSet:(int)a0;
- (void)addAlternateName:(id)a0;
- (id)secondName;

@end
