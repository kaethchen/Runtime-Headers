@class NSString, NSLayoutConstraint, IMTranscriptChatItem;
@protocol SOTranscriptCollectionViewItemDelegate, IMDynamicGradientReferenceView, SOTranscriptTheme;

@interface SOTranscriptCollectionViewItem : NSCollectionViewItem <IMChatTranscriptView, IMChatTranscriptDrawable, SOTranscriptThemeable> {
    NSLayoutConstraint *_maxWidthConstraint;
    IMTranscriptChatItem *_chatItem;
}

@property (class, readonly, nonatomic) Class viewClass;
@property (class, readonly, copy, nonatomic) NSString *itemTypeIdentifier;

@property (weak) id<SOTranscriptCollectionViewItemDelegate> delegate;
@property (nonatomic) double maximumWidth;
@property (weak, nonatomic) id<IMDynamicGradientReferenceView> gradientReferenceView;
@property (readonly) struct IMBalloonDescriptor_t { char x0; char x1; char x2; unsigned long long x3; unsigned long long x4; char x5; char x6; } balloonDescriptor;
@property (retain, nonatomic) IMTranscriptChatItem *chatTranscriptItem;
@property (readonly, nonatomic) IMTranscriptChatItem *chatItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) long long layoutClassification;
@property (readonly, nonatomic) id<SOTranscriptTheme> transcriptTheme;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)loadView;
- (struct CGSize { double x0; double x1; })sizeConstrainedToWidth:(double)a0;
- (long long)verticalSpaceToPrecedingItemOfClassification:(long long)a0;
- (void)_transcriptItemDidChange;

@end
