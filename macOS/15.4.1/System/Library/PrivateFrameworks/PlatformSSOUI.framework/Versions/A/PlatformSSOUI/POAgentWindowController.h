@class NSString;
@protocol POExtensionDelegate;

@interface POAgentWindowController : NSWindowController <NSWindowDelegate>

@property (weak) id<POExtensionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
