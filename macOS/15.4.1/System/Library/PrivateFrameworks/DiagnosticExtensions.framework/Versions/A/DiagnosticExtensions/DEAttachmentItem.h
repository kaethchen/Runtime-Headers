@class NSString, NSURL, NSDate, NSNumber;

@interface DEAttachmentItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *_sandboxExtensionToken;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSURL *path;
@property (retain, nonatomic) NSDate *modificationDate;
@property (retain, nonatomic) NSNumber *filesize;
@property (retain, nonatomic) NSNumber *shouldCompress;
@property (retain, nonatomic) NSURL *attachedPath;
@property (copy, nonatomic) NSString *attachmentType;
@property (copy, nonatomic) NSNumber *deleteOnAttach;

+ (id)attachmentWithPath:(id)a0;
+ (id)attachmentWithPath:(id)a0 withDisplayName:(id)a1 modificationDate:(id)a2 andFilesize:(id)a3;
+ (id)attachmentWithPathURL:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)detach;
- (id)initWithPath:(id)a0;
- (id)sandboxExtensionHandleWithErrorOut:(id *)a0;
- (id)attachToDestinationDir:(id)a0;
- (id)initWithPathURL:(id)a0;
- (id)initWithPathURL:(id)a0 shouldCheckURLAttributes:(BOOL)a1;
- (void)_generateSandboxExtensionTokenForPID:(int)a0;
- (id)initWithPath:(id)a0 withDisplayName:(id)a1 modificationDate:(id)a2 andFilesize:(id)a3;

@end
