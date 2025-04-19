@protocol CSKMessagesTableViewEventDelegate;

@interface CSKMessagesTableView : NSTableView

@property (weak, nonatomic) id<CSKMessagesTableViewEventDelegate> eventDelegate;

- (void).cxx_destruct;
- (void)keyDown:(id)a0;

@end
