@class NSSet, NSDictionary;

@interface CTXPCMessage : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *allowedClassesForArguments;
@property (class, readonly, nonatomic, getter=isSensitiveMessage) BOOL sensitiveMessage;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *namedArguments;

- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNamedArguments:(id)a0;

@end
