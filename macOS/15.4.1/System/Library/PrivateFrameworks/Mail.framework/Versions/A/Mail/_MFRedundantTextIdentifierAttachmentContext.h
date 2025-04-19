@class NSString;

@interface _MFRedundantTextIdentifierAttachmentContext : NSObject

@property (readonly, copy, nonatomic) NSString *attachmentName;
@property (readonly, copy, nonatomic) NSString *attachmentExtension;
@property (readonly, nonatomic) unsigned long long attachmentSize;
@property (readonly, nonatomic) BOOL attachmentIsDownloaded;
@property (readonly, nonatomic) BOOL attachmentIsAutoArchived;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithAttachmentName:(id)a0 attachmentSize:(unsigned long long)a1 attachmentIsDownloaded:(BOOL)a2 attachmentIsAutoArchived:(BOOL)a3;

@end
