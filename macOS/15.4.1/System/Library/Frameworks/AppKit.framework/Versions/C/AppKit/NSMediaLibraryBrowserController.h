@interface NSMediaLibraryBrowserController : NSObject

@property (class, readonly) NSMediaLibraryBrowserController *sharedMediaLibraryBrowserController;

@property (getter=isVisible) BOOL visible;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property unsigned long long mediaLibraries;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

@end
