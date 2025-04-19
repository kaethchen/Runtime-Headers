@class NSSet, NSString, NSData;

@interface CRKOpenFilesRequest : CATTaskRequest

@property (copy, nonatomic) NSSet *fileItems;
@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSData *previewImageData;
@property (nonatomic) BOOL autoAccept;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
