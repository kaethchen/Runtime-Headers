@class NSUUID, NSString, NSURL, NSDictionary;

@interface XCTAttachmentFutureMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *attachmentUUID;
@property (readonly, copy, nonatomic) NSString *dataContainerRelativeAttachmentPath;
@property (readonly, nonatomic) NSURL *dataContainerURLPrefix;
@property (retain, nonatomic) NSURL *hostLocalURLOfFinalizedAttachment;
@property (readonly, nonatomic) NSString *uniformTypeIdentifierString;
@property (nonatomic) unsigned long long finalizationState;
@property (readonly, copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSDictionary *additionalMetadata;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttachmentUUID:(id)a0 dataContainerRelativeAttachmentPath:(id)a1 dataContainerURLPrefix:(id)a2 hostLocalURLOfFinalizedAttachment:(id)a3 uniformTypeIdentifierString:(id)a4 finalizationState:(unsigned long long)a5 userName:(id)a6 additionalMetadata:(id)a7;

@end
