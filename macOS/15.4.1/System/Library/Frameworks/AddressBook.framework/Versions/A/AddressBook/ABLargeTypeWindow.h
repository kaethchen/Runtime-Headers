@class NSString;

@interface ABLargeTypeWindow : NSWindow <NSWindowDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forceLTRString:(id)a0;
+ (void)showWithString:(id)a0 onScreen:(id)a1;

@end
