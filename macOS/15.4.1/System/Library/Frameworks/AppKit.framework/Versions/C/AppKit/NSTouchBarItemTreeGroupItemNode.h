@class NSTouchBar, NSString;

@interface NSTouchBarItemTreeGroupItemNode : NSTouchBarItemTreeItemNode <NSTouchBarItemTreeParentNode>

@property (readonly) NSTouchBar *touchBarContainingChildNodes;
@property (readonly) long long touchBarLayoutDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItem:(id)a0;

@end
