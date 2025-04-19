@class FPSandboxingURLWrapper, NSData, NSURL, UTType, NSDictionary;

@interface QLThumbnailItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) FPSandboxingURLWrapper *urlWrapper;
@property (retain, nonatomic) NSURL *temporaryURL;
@property (nonatomic) BOOL needStopAccessing;
@property (nonatomic) BOOL needStopAccessingParent;
@property (retain, nonatomic) UTType *contentType;
@property (copy) NSDictionary *attachments;
@property (retain, nonatomic) FPSandboxingURLWrapper *parentDirectoryWrapper;

- (void).cxx_destruct;
- (void)cleanup;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)fileURL;
- (id)initWithURL:(id)a0 contentType:(id)a1;
- (id)initWithData:(id)a0 contentType:(id)a1;
- (id)fileData;
- (id)initWithURLWrapper:(id)a0 parentDirectoryWrapper:(id)a1 contentType:(id)a2;
- (void)startAccessingIfNeeded;

@end
