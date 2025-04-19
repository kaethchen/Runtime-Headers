@interface QLPreviewProgressiveCallbacks : NSObject

@property (copy, nonatomic) id /* block */ startDataRepresentation;
@property (copy, nonatomic) id /* block */ startAttachment;
@property (copy, nonatomic) id /* block */ appendData;
@property (copy, nonatomic) id /* block */ createSafeAttachmentURL;

- (void).cxx_destruct;

@end
