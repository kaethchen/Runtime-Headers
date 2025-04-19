@class NSString, NSLayoutConstraint;

@interface SOEffectControlMessageStatusCollectionViewItem : SOTranscriptCollectionViewItem <NSGestureRecognizerDelegate> {
    NSLayoutConstraint *_leadingTextFieldConstraint;
    NSLayoutConstraint *_trailingTextFieldConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)_transcriptItemDidChange;
- (id)stringForChatTranscriptItem:(id)a0;
- (void)wasClicked:(id)a0;

@end
