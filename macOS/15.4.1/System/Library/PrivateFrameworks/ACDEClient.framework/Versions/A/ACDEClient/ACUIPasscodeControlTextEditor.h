@protocol ACUIPasscodeControlTextEditorDelegate;

@interface ACUIPasscodeControlTextEditor : NSTextView

@property (nonatomic) id<ACUIPasscodeControlTextEditorDelegate> pasteDelegate;

- (void)dealloc;
- (void)paste:(id)a0;

@end
