@class NSWindowController;

@interface IMKPreferences : NSObject {
    NSWindowController *_windowController;
}

+ (void)initialize;

- (void)dealloc;
- (id)windowController;

@end
