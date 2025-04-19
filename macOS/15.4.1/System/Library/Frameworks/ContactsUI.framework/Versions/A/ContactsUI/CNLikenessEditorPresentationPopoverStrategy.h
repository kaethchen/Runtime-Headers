@class NSString, NSPopover;

@interface CNLikenessEditorPresentationPopoverStrategy : NSObject <CNLikenessEditorPresentationStrategy>

@property (retain) NSPopover *popover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)strategy;

@end
