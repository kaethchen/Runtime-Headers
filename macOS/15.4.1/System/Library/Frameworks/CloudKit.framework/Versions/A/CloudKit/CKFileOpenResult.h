@class NSNumber, NSFileHandle;

@interface CKFileOpenResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSFileHandle *fileHandle;
@property (readonly, nonatomic) NSFileHandle *encryptedFileHandle;
@property (readonly, copy, nonatomic) NSNumber *fileSize;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileHandle:(id)a0 fileSize:(id)a1;

@end
