@interface SOMessagePartCollectionViewItem : SOTranscriptCollectionViewItem

- (void)loadView;
- (void)setMaximumWidth:(double)a0;
- (BOOL)wantsTail;
- (id)balloonView;
- (void)_transcriptItemDidChange;
- (long long)fullScreenEffectFilterType;

@end
