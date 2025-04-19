@class NSData, NSURL, NSString;

@interface QLRequestSessionData : NSObject

@property (readonly) NSData *data;
@property (readonly) NSURL *attachmentURL;
@property (readonly) BOOL lastChunk;
@property (readonly) BOOL startAttachment;
@property (readonly) NSString *mimeType;
@property (readonly) NSString *textEncoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 attachmentURL:(id)a1 isLastChunk:(BOOL)a2;
- (id)initWithStartAttachment:(BOOL)a0 attachmentURL:(id)a1 mimeType:(id)a2 textEncoding:(id)a3;

@end
