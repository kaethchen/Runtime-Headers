@class NSString;

@interface AMUnknownXPCToken : AMXPCToken

@property (retain) NSString *objectDescription;
@property (retain) NSString *classDescription;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_am_convertFromXPCWithWorkflow:(id)a0;

@end
