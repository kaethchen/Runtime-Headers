@class NSString, CPKPopover, CPKEmojiDataSource, NSWindow;

@interface CNAvatarPickerEmojiPickerHelper : NSObject <CPKPopoverDelegate, NSPopoverDelegate>

@property (weak) NSWindow *presentingWindow;
@property (retain) CPKPopover *popover;
@property (retain) CPKEmojiDataSource *emojiDataSource;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
