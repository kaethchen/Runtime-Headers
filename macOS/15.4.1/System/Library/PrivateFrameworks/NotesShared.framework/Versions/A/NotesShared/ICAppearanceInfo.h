@interface ICAppearanceInfo : NSObject {
    unsigned long long _hash;
}

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL isDark;

+ (id)appearanceInfoWithType:(unsigned long long)a0;
+ (void)enumerateAppearanceTypesUsingBlock:(id /* block */)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
