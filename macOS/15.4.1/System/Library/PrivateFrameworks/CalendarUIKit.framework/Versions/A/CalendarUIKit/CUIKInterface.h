@class NSString;

@interface CUIKInterface : NSObject

@property long long overrideLayoutDirection;
@property (retain) NSString *overridePreferredContentSizeCategory;

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isCurrentProcessAnApplicationExtension;
- (BOOL)interfaceIsLeftToRight;
- (long long)layoutDirectionOrOverride;
- (id)preferredContentSizeCategoryOrOverride;
- (void)setLayoutDirectionOverride:(long long)a0;
- (void)setPreferredContentSizeCategoryOverride:(id)a0;
- (BOOL)usesLargeTextLayout;

@end
