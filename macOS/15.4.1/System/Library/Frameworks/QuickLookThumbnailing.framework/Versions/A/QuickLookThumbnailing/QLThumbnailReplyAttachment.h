@class NSData, UTType;

@interface QLThumbnailReplyAttachment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) UTType *contentType;
@property (retain) NSData *data;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 contentType:(id)a1;

@end
