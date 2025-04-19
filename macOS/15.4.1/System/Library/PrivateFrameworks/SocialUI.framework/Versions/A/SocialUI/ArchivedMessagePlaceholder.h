@class IMMessage;

@interface ArchivedMessagePlaceholder : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) IMMessage *message;

+ (id)allowedSecureArchivingClasses_so;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessage:(id)a0;

@end
