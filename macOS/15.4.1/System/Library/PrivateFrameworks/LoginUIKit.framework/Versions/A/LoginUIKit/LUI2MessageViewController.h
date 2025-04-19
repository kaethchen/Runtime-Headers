@class NSScrollView, NSString, NSLayoutConstraint, NSVisualEffectView, NSTextView;

@interface LUI2MessageViewController : LUI2ViewController <NSTextStorageDelegate>

@property (class, readonly) double centerXPadding;

@property (retain) NSVisualEffectView *vibrantTextEffectView;
@property (retain) NSScrollView *scrollView;
@property NSLayoutConstraint *scrollViewHeightConstraint;
@property NSLayoutConstraint *messageTextViewHeightConstraint;
@property (readonly) NSTextView *messageTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void)_resizeTextView;
- (void)_updateAccessibility;

@end
