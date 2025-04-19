@class UNSecurityScopedURL, NSString, NSDictionary, NSURL, UNNotificationAttachmentOptions;

@interface UNNotificationAttachment : NSObject <UNNotificationSecurityScopeProviding, NSCopying, NSSecureCoding> {
    UNSecurityScopedURL *_securityScopedURL;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _securityScopeLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long family;
@property (readonly, copy, nonatomic) UNNotificationAttachmentOptions *options;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attachmentWithIdentifier:(id)a0 URL:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)attachmentWithIdentifier:(id)a0 URL:(id)a1 options:(id)a2 userInfo:(id)a3 error:(id *)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)family;
- (id)_encodableURL;
- (void)_withSecurityScopeLock:(id /* block */)a0;
- (void)addSecurityScope:(id)a0;
- (void)enterSecurityScope;
- (id)initWithIdentifier:(id)a0 URL:(id)a1 type:(id)a2 options:(id)a3;
- (id)initWithIdentifier:(id)a0 URL:(id)a1 type:(id)a2 options:(id)a3 userInfo:(id)a4;
- (id)initWithIdentifier:(id)a0 family:(unsigned long long)a1 URL:(id)a2 type:(id)a3 options:(id)a4;
- (void)leaveSecurityScope;
- (void)removeSecurityScope;

@end
