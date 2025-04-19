@class NSString, NSWindow;

@interface ABDeleteGroupSheet : NSObject

@property (retain) NSWindow *window;
@property (copy) NSString *groupName;
@property unsigned long long memberCount;
@property int containmentPersonality;

- (void).cxx_destruct;
- (void)beginSheetWithCompletionHandler:(id /* block */)a0;

@end
