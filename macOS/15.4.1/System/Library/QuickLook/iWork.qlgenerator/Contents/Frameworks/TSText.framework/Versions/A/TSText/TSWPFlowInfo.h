@class TSDInfoGeometry, NSArray, TSWPStorage, NSString, TSUColor, NSObject, TSPObject;
@protocol TSDInfo, TSDOwningAttachment;

@interface TSWPFlowInfo : TSPObject <TSWPFlowInfo, TSDContainerInfo, TSDLockableInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>

@property (retain, nonatomic) TSWPStorage *textStorage;
@property (retain, nonatomic) NSArray *textboxes;
@property (nonatomic) unsigned long long userInterfaceIdentifier;
@property (readonly, nonatomic) TSUColor *userInterfaceFillColor;
@property (readonly, nonatomic) TSUColor *userInterfaceStrokeColor;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) unsigned long long textOrientation;
@property (readonly, nonatomic) BOOL containsRotatedOrFlippedTextBox;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) long long nestedTextboxDepth;
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (readonly, nonatomic) BOOL textIsLinked;
@property (readonly, nonatomic) BOOL preventsComments;
@property (readonly, nonatomic) BOOL preventsChangeTracking;
@property (readonly, nonatomic) BOOL supportsMultipleColumns;
@property (readonly, nonatomic) long long contentWritingDirection;
@property (readonly, nonatomic) BOOL storageChangesInvalidateWrap;
@property (readonly, nonatomic) BOOL supportsVerticalTextLayoutInChildStorages;
@property (readonly, nonatomic) BOOL supportsDropCapsInChildStorages;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;

+ (BOOL)needsObjectUUID;
+ (id)fillColorForUserInterfaceIdentifier:(unsigned long long)a0;
+ (id)strokeColorForUserInterfaceIdentifier:(unsigned long long)a0;
+ (id)p_colorForIndex:(unsigned long long)a0;
+ (id)p_darkColorForColor:(id)a0;
+ (id)p_darkColorForIndex:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isSelectable;
- (id)copyWithContext:(id)a0;
- (Class)layoutClass;
- (id)childEnumerator;
- (void)clearBackPointerToParentInfoIfNeeded:(id)a0;
- (BOOL)isThemeContent;
- (Class)repClass;
- (void)adoptStylesheet:(id)a0 withMapper:(id)a1;
- (void)processSelectedStoragesWithStatisticsController:(id)a0;
- (BOOL)textIsVerticalAtCharIndex:(unsigned long long)a0;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)infoForSelectionPath:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)setPrimitiveGeometry:(id)a0;
- (unsigned long long)indexOfTextBox:(id)a0;
- (id)displayNameOfMaxLength:(unsigned long long)a0 usesEllipsis:(BOOL)a1;
- (id)extractTextStorage;
- (void)i_uncheckedSetTextboxes:(id)a0;
- (id)initWithStorage:(id)a0 context:(id)a1;
- (void)loadFromFlowInfoArchive:(const void *)a0 unarchiver:(id)a1;
- (void)pSaveToFlowInfoArchive:(void *)a0 archiver:(id)a1 textBoxes:(id)a2;
- (void)saveWithOnlyLinkedTextBoxes:(id)a0 archiver:(id)a1;

@end
