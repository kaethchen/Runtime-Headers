@class NSString;

@interface WKPromisedAttachmentContext : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _fileName;
    struct RetainPtr<NSString> { void *m_ptr; } _attachmentIdentifier;
}

@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *attachmentIdentifier;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithIdentifier:(id)a0 fileName:(id)a1;

@end
