@class NSHashTable, LPLinkView, NSString, ICAddAttachmentsManagerAttachmentInfo, NSColor, NSLayoutConstraint, ICAttachment, ICSearchResultRegexMatchFinder;

@interface ICAttachmentBrickView : NSView <LPLinkViewDelegate, LPAudioPlayer>

@property (class, readonly, nonatomic) NSColor *standardBackgroundColor;

@property (retain, nonatomic) LPLinkView *linkView;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSHashTable *audioPlayerClients;
@property (nonatomic) unsigned long long playerState;
@property (nonatomic) float playbackProgress;
@property (nonatomic) BOOL waitingForMetadata;
@property (readonly, nonatomic) BOOL isMetadataComplete;
@property (nonatomic) BOOL hasPerformedInitialLayout;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (weak, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) ICAddAttachmentsManagerAttachmentInfo *shareExtensionAttachmentInfo;
@property (nonatomic) BOOL selected;
@property (nonatomic, getter=isInsideSystemPaper) BOOL insideSystemPaper;
@property (copy, nonatomic) NSColor *highlightColor;
@property (readonly, nonatomic) double effectiveLayoutCornerRadius;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } computedSize;
@property (readonly, nonatomic) NSString *typeDescriptionForAccessibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) unsigned long long state;

+ (BOOL)usesSmallSizeForAttachment:(id)a0 withMetadata:(id)a1 type:(unsigned long long)a2 insideSystemPaper:(BOOL)a3;
+ (struct CGSize { double x0; double x1; })defaultBrickSize;
+ (struct CGSize { double x0; double x1; })sizeForAttachment:(id)a0 usesSmallSize:(BOOL)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)pause;
- (void)layout;
- (void)reset;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (void)play;
- (void)reloadData;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateTitle;
- (id)_linkView:(id)a0 playerForAudio:(id)a1;
- (void)linkView:(id)a0 didFetchMetadata:(id)a1;
- (void)linkViewNeedsResize:(id)a0;
- (void)togglePlayPause;
- (void)displaySynapseAttachmentPreview;
- (void)accentColorDidChange;
- (void)adjustSizeIfNecessary;
- (void)attachmentDidLoadNotification:(id)a0;
- (void)attachmentPreviewImagesDidUpdateNotification:(id)a0;
- (void)constrainViews;
- (void)didFailFetchingMetadataNotification:(id)a0;
- (void)displayFilePreview;
- (void)displayGenericURLPreview;
- (void)displayRemoteAttachmentPreview;
- (void)displayScannedDocumentsPreview;
- (void)displayUnsupportedAttachmentPreview;
- (void)initialAttachmentPreviewDidLoad:(id)a0;
- (void)mediaDidLoadNotification:(id)a0;
- (void)notifyClientsAboutSizeChangesIfNecessary;
- (void)playbackPausedNotification:(id)a0;
- (void)playbackStartedNotification:(id)a0;
- (void)playbackStoppedNotification:(id)a0;
- (void)progressChangedNotification:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })quickLookSourceFrameOnScreen;
- (id)quickLookTransitionImageWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (void)resetPlaybackProgressAndState;
- (void)updateAttachmentBackgroundColorIfNecessary;
- (void)updateAudioClientsProgress:(float)a0;
- (void)updateAudioClientsState:(unsigned long long)a0;
- (void)updateSearchHighlighting;
- (void)updateSelectionColor;
- (void)updateUIWithMetadata:(id)a0;

@end
