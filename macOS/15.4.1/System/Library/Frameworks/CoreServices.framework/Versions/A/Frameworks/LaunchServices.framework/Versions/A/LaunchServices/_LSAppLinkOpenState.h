@class NSString, NSXPCConnection, NSURL, _LSOpenConfiguration;

@interface _LSAppLinkOpenState : NSObject <NSCopying, NSSecureCoding> {
    struct optional<audit_token_t> { union { char __null_state_; struct { unsigned int val[8]; } __val_; } ; BOOL __engaged_; } _auditToken;
    NSXPCConnection *_XPCConnection;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSURL *URL;
@property (copy) NSString *bundleIdentifier;
@property (retain) _LSOpenConfiguration *openConfiguration;
@property (nonatomic) const struct { unsigned int x0[8]; } *auditToken;
@property (retain, nonatomic) NSXPCConnection *XPCConnection;
@property BOOL includeLinksForCallingApplication;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;

@end
