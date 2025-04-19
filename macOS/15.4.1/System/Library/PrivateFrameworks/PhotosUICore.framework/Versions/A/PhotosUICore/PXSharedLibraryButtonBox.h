@class NSString, NSButton;

@interface PXSharedLibraryButtonBox : NSBox {
    NSButton *_addImageButton;
    NSButton *_addTextButton;
}

@property (copy, nonatomic) NSString *buttonTitle;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithSymbolName:(id)a0 symbolConfiguration:(id)a1 symbolBackgroundLength:(double)a2 buttonTitle:(id)a3 target:(id)a4 action:(SEL)a5;

@end
