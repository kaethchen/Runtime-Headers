@class NSURL;
@protocol WKWebExtensionWindow, WKWebExtensionTab;

@interface WKWebExtensionTabConfiguration : NSObject

@property (retain, nonatomic, setter=_setWindow:) id<WKWebExtensionWindow> window;
@property (nonatomic, setter=_setIndex:) unsigned long long index;
@property (retain, nonatomic, setter=_setParentTab:) id<WKWebExtensionTab> parentTab;
@property (copy, nonatomic, setter=_setURL:) NSURL *url;
@property (nonatomic, setter=_setShouldBeActive:) BOOL shouldBeActive;
@property (nonatomic, setter=_setShouldAddToSelection:) BOOL shouldAddToSelection;
@property (nonatomic, setter=_setShouldBePinned:) BOOL shouldBePinned;
@property (nonatomic, setter=_setShouldBeMuted:) BOOL shouldBeMuted;
@property (nonatomic, setter=_setShouldReaderModeBeActive:) BOOL shouldReaderModeBeActive;

- (void).cxx_destruct;
- (id)_init;

@end
