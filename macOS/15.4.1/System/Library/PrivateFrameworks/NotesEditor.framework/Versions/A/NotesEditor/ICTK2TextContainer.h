@class ICTK2MacTextView;
@protocol ICLinkMenuDelegate;

@interface ICTK2TextContainer : NSTextContainer <ICSystemPaperTextAttachmentNotesEditorBridgeWorkaround>

@property (nonatomic) BOOL inPreviewMode;
@property (nonatomic) BOOL insideSystemPaper;
@property (nonatomic) BOOL insideSiriSnippet;
@property (nonatomic) id<ICLinkMenuDelegate> linkDelegate;
@property (readonly, nonatomic) ICTK2MacTextView *tk2TextView;

- (id)layoutManager;

@end
