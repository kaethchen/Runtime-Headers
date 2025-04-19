@class NSString, NSArray;

@interface ASTUploadFilesResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSArray *certs;
@property (retain, nonatomic) NSArray *files;

+ (id)resultFromSource:(id)a0 andUploadDictionaries:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)generatePayload;
- (id)initWithSource:(id)a0 andCerts:(id)a1 andFiles:(id)a2;

@end
