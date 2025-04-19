@class NSURL, NSNumber;

@interface CTLazuliSystemCapablities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *exploderUri;
@property (nonatomic) BOOL autoAcceptChat;
@property (nonatomic) BOOL autoAcceptGroupChat;
@property (retain, nonatomic) NSNumber *maxGroupSize;
@property (retain, nonatomic) NSURL *fileTransferUrl;
@property (retain, nonatomic) NSNumber *fileTransferMaxRecipients;
@property (retain, nonatomic) NSNumber *maxFileTransferSize;
@property (nonatomic) BOOL fileTransferAutoAccept;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliSystemCapablities:(id)a0;

@end
