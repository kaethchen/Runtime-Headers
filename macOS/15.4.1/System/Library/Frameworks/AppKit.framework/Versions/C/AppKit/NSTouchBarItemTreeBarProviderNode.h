@class NSTouchBar, NSString;

@interface NSTouchBarItemTreeBarProviderNode : NSTouchBarItemTreeNode <NSTouchBarItemTreeParentNode>

@property (readonly) NSTouchBar *touchBar;
@property (readonly) NSTouchBar *touchBarContainingChildNodes;
@property (readonly) long long touchBarLayoutDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeForTouchBar:(id)a0;

@end
