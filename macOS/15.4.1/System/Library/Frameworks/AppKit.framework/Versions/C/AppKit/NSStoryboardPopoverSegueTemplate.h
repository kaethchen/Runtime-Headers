@class NSView;

@interface NSStoryboardPopoverSegueTemplate : NSStoryboardSegueTemplate <NSCoding>

@property (weak) NSView *anchorView;
@property long long popoverBehavior;
@property unsigned long long preferredEdge;
@property BOOL hasFullSizeContent;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)a0;

@end
