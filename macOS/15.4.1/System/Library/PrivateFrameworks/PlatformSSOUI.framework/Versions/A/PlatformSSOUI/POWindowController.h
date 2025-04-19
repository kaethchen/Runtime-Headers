@class NSString;

@interface POWindowController : NSWindowController <NSWindowDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWindow:(id)a0;

@end
