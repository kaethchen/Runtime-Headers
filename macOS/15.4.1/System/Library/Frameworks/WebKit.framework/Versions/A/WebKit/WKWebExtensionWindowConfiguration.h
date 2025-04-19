@class NSArray;

@interface WKWebExtensionWindowConfiguration : NSObject

@property (nonatomic, setter=_setFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic, setter=_setWindowType:) long long windowType;
@property (nonatomic, setter=_setWindowState:) long long windowState;
@property (copy, nonatomic, setter=_setTabURLs:) NSArray *tabURLs;
@property (copy, nonatomic, setter=_setTabs:) NSArray *tabs;
@property (nonatomic, setter=_setShouldBeFocused:) BOOL shouldBeFocused;
@property (nonatomic, setter=_setShouldBePrivate:) BOOL shouldBePrivate;

- (void).cxx_destruct;
- (id)_init;

@end
