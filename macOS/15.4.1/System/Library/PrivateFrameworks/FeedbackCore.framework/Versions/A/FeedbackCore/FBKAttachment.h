@class _TtC12FeedbackCore23FBKAttachmentAnnotation, DEDAttachmentItem, NSString, NSURL, DEDExtension, FBKMatcherPredicate, DEDAttachmentGroup, FBKURLExtension;

@interface FBKAttachment : NSObject <FBKDiffableObject>

@property (nonatomic, readonly) _TtC12FeedbackCore23FBKAttachmentAnnotation *annotation;
@property (retain, nonatomic) DEDAttachmentGroup *attachedGroup;
@property (retain, nonatomic) DEDAttachmentItem *attachedItem;
@property (nonatomic) long long attachmentType;
@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSURL *originalLocalFileURL;
@property (readonly) NSString *uniqueIdentifier;
@property (retain, nonatomic) FBKMatcherPredicate *requirement;
@property (retain, nonatomic) DEDExtension *extension;
@property (retain, nonatomic) FBKURLExtension *urlExtension;
@property (nonatomic) BOOL fileComesFromFBK;
@property (readonly, nonatomic) BOOL wasAttachedByApplication;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSString *stateDescription;
@property (retain, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) NSString *proposedFileNameForLocalFiles;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *collectorIdentifier;
@property (readonly, nonatomic) NSString *instructionsAsHTML;
@property (retain, nonatomic) NSString *localizedAttachmentInfo;
@property (retain) id _annotationUntypedButAccessibleInSwift;

+ (id)descriptorForAttachment:(id)a0 given:(id)a1;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setGroup:(id)a0;
- (id)displayName;
- (BOOL)isCollecting;
- (id)item;
- (void)remove;
- (id)shortDescription;
- (id)group;
- (BOOL)isRequired;
- (BOOL)isLocal;
- (BOOL)hasGroup;
- (BOOL)canBeDeleted;
- (BOOL)canStartGathering;
- (id)diffableHashWithContext:(id)a0;
- (BOOL)hasFBKFileReadyForSubmission;
- (BOOL)hasFiles;
- (id)initWithCollectorIdentifier:(id)a0 deviceUUID:(id)a1;
- (id)initWithRequirement:(id)a0 urlExtension:(id)a1 collectorIdentifier:(id)a2 deviceUUID:(id)a3;
- (BOOL)isAdditional;
- (BOOL)isReadyToDisplayContents;
- (void)loadAnnotationFromURL:(id)a0;
- (BOOL)matchesAttachmentDescriptor:(id)a0;
- (id)promisedFileName;
- (void)setItem:(id)a0 originalURL:(id)a1;
- (BOOL)shouldAutoGather;

@end
