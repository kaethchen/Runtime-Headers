@class NSString, NSImage, NSDictionary, VUIAction;

@interface VUIActionAlertActionItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *titleImage;
@property (retain, nonatomic) VUIAction *action;
@property (retain, nonatomic) NSDictionary *metrics;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 titleImage:(id)a1 action:(id)a2 metrics:(id)a3;

@end
