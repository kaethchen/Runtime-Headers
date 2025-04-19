@interface NSTableViewSidebarDefaultIconSizeObserver : NSObject

@property (class, readonly, nonatomic) long long currentRowSizeStyle;

+ (void)initialize;
+ (void)defaultRowSizeStyleChanged:(id)a0;
+ (long long)readUserDefaultsValue;

@end
