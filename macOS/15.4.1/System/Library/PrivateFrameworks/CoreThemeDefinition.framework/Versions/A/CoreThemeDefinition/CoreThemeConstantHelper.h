@class NSString;

@interface CoreThemeConstantHelper : NSObject {
    unsigned long long _identifier;
    NSString *_label;
    NSString *_displayName;
}

+ (id)helperForStructAtIndex:(long long)a0 inAssociatedGlobalList:(void *)a1;

- (void)dealloc;
- (id)description;
- (long long)identifier;
- (id)displayName;
- (id)label;

@end
