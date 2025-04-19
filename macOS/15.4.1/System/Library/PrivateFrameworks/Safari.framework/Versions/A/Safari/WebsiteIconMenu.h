@class NSString;
@protocol NSMenuDelegate;

@interface WebsiteIconMenu : NSMenu <NSMenuDelegate> {
    id<NSMenuDelegate> _forwardDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)initWithTitle:(id)a0;
- (void)menuWillOpen:(id)a0;

@end
