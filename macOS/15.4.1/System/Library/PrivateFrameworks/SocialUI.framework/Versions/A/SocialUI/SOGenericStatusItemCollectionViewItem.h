@interface SOGenericStatusItemCollectionViewItem : SOTranscriptCollectionViewItem

- (void)loadView;
- (void)_updateText;
- (void)_configureText;
- (void)_transcriptItemDidChange;
- (id)stringForChatTranscriptItem:(id)a0;

@end
