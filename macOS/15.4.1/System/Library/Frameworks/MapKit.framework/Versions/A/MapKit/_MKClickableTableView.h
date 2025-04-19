@protocol _MKClickableTableViewDelegate;

@interface _MKClickableTableView : NSTableView

@property (weak, nonatomic) id<_MKClickableTableViewDelegate> clickableDelegate;

- (void).cxx_destruct;
- (void)mouseDown:(id)a0;

@end
