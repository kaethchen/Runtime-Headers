@class NSURL;

@interface FileWrapper : NSFileWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *originatingURL;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)writeToURL:(id)a0 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)a1;
- (BOOL)writeToUniqueFileInDirectory:(id)a0 attemptedURL:(id *)a1 shouldSetPrivacySensitiveQuarantineProperties:(BOOL)a2;

@end
