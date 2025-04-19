@class HKAttachmentStore, NSString, UTType, NSURL, NSDictionary;

@interface HKAttachmentBuilder : NSObject {
    HKAttachmentStore *_attachmentStore;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) UTType *contentType;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *objectIdentifier;
@property (copy, nonatomic) NSString *schemaIdentifier;
@property (copy, nonatomic) NSDictionary *attachmentMetadata;
@property (copy, nonatomic) NSDictionary *referenceMetadata;

- (void).cxx_destruct;
- (void)finishWithCompletion:(id /* block */)a0;
- (id)initWithAttachmentStore:(id)a0;

@end
