@class _BlastDoorLPLinkMetadata;

@interface _BlastDoorLPMessagesPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _BlastDoorLPLinkMetadata *metadata;
@property (nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (nonatomic) BOOL needsSubresourceFetch;
@property (nonatomic) BOOL needsCompleteFetch;

+ (id)linkWithDataRepresentation:(id)a0 attachments:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dataRepresentationWithOutOfLineAttachments:(id *)a0;
- (BOOL)_needsWorkaroundForAppStoreTransformerCrash;

@end
