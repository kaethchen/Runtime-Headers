@class NSArray;

@interface CPKState : NSObject

@property (nonatomic) BOOL characterSelectionPending;
@property (nonatomic) BOOL forceTopPositionInEmojiPicker;
@property (nonatomic, getter=isShowingGenerationUI) BOOL showingGenerationUI;
@property (nonatomic) BOOL showsCharacterViewerButton;
@property (retain, nonatomic) NSArray *suggestedEmojis;
@property (nonatomic) BOOL supportsInlineTextAttachments;
@property (nonatomic) BOOL supportsImagePaste;
@property (nonatomic) BOOL isShowingContextMenu;
@property (nonatomic) BOOL _overrideCombinedPicker;

+ (id)state;

- (void).cxx_destruct;

@end
