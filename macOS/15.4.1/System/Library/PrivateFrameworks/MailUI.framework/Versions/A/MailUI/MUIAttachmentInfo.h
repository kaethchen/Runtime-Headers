@class NSString;

@interface MUIAttachmentInfo : MSAttachmentInfo

@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL canBeSentInline;
@property (copy, nonatomic) NSString *mailDropLink;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 filename:(id)a1 isImage:(BOOL)a2 canBeSentInline:(BOOL)a3;

@end
