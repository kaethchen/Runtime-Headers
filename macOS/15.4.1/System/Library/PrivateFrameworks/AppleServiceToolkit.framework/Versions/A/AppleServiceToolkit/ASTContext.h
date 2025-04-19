@class ASTControlCommand, ASTIdentity;

@interface ASTContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long clientStatus;
@property long long command;
@property BOOL testSuiteRunning;
@property (readonly) ASTControlCommand *controlCommand;
@property (readonly, copy) ASTIdentity *identity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentity:(id)a0;

@end
