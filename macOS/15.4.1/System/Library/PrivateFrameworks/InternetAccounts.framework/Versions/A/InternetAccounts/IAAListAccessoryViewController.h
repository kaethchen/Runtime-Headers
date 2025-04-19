@class NSView, IAAccount;

@interface IAAListAccessoryViewController : NSObject {
    NSView *_view;
}

@property (readonly) IAAccount *account;

- (void).cxx_destruct;
- (id)view;
- (id)initWithAccount:(id)a0;
- (void)syncUI;

@end
