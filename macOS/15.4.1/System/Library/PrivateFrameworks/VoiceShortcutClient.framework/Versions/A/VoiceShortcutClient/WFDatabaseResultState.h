@class NSSet;

@interface WFDatabaseResultState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long objectType;
@property (readonly, nonatomic) NSSet *state;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectType:(unsigned long long)a0 state:(id)a1;

@end
