@class NSString, NSObject, NSTextField;
@protocol INTOutlineNodeViewDelegate;

@interface INTOutlineNodeView : NSTableCellView

@property (class, readonly) NSString *reuseIdentifier;

@property (retain, nonatomic) NSTextField *issuesLabel;
@property (retain, nonatomic) NSTextField *hiddenLabel;
@property (retain, nonatomic) NSTextField *nameLabel;
@property (nonatomic) BOOL rolledOver;
@property (retain, nonatomic) NSObject *item;
@property (nonatomic) id<INTOutlineNodeViewDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)setObjectValue:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (id)currItem;
- (void)dumpLayer:(id)a0;
- (void)updateRollover;

@end
