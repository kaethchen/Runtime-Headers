@class NSUUID, NSString, NSArray, NSAttributedString, NSData, _SWCollaborationMetadata, NSDictionary, _SWPendingCollaboration, CKContainerSetupInfo, LPLinkMetadata, CKShare, _SWCollaborationShareOptions;

@interface SHKMessagesLaunchEventContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSDictionary *parameters;
@property (readonly, copy) NSString *subject;
@property (readonly, copy) NSArray *recipients;
@property (readonly, copy) NSUUID *sessionID;
@property (readonly, copy) NSAttributedString *text;
@property (readonly, copy) NSArray *URLs;
@property (readonly, copy) NSArray *fileURLs;
@property (readonly, copy) NSArray *sendCopyRepresentationFileURLs;
@property (readonly, copy) NSArray *auxiliaryFileURLs;
@property (readonly) NSData *webArchiveData;
@property (readonly) LPLinkMetadata *richLinkMetadata;
@property (readonly, copy) _SWCollaborationShareOptions *collaborationShareOptions;
@property (readonly, copy) NSArray *collaborationOptions;
@property (readonly) _SWCollaborationMetadata *collaborationMetadata;
@property (readonly) _SWPendingCollaboration *pendingCollaboration;
@property (readonly) CKShare *share;
@property (readonly) CKContainerSetupInfo *containerSetupInfo;
@property (readonly) long long mode;
@property (readonly) long long collaborationType;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_createBookmarkDataArrayFromFileURLs:(id)a0;
- (id)_resolveBookmarkDataArray:(id)a0;

@end
