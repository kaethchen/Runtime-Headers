@class NSString, LUIGoodSamaritanMessageView;

@interface LUIMessageViewController : LUIViewController {
    LUIGoodSamaritanMessageView *_messageView;
    NSString *_currentMessage;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setMessage:(id)a0;
- (id)initWithStyle:(int)a0;
- (void)refresh;
- (void)_layoutContentView;
- (void)_setupContentView;

@end
