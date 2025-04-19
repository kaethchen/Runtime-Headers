@class NSString, NSWindow;

@interface NSWindowMenuItem : NSObject

@property NSWindow *window;
@property (retain) NSString *path;
@property (copy) NSString *title;

- (void)dealloc;

@end
