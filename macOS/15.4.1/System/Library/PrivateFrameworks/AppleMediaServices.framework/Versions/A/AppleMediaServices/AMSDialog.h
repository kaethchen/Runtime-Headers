@class NSArray, NSImage, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AMSDialog : NSObject {
    NSObject<OS_dispatch_queue> *_systemDialogQueue;
}

@property (copy) NSArray *buttons;
@property (copy) id /* block */ completionHandler;
@property (copy) NSImage *icon;
@property (copy) NSString *message;
@property long long selectedButtonIndex;
@property long long style;
@property (copy) NSArray *textFields;
@property (copy) NSString *title;

+ (id)dialogWithTitle:(id)a0 message:(id)a1;
+ (id)dialogWithTitle:(id)a0 message:(id)a1 style:(long long)a2;

- (void).cxx_destruct;
- (void)present;
- (void)addButton:(id)a0;
- (void)addTextField:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1 style:(long long)a2;
- (void)presentFromViewController:(id)a0;
- (void)presentSheetFromWindow:(id)a0;
- (void)presentSystemDialog;

@end
