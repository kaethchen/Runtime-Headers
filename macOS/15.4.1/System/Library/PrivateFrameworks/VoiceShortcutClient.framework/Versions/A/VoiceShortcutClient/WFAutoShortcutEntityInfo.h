@class NSString, WFContextualActionIcon;

@interface WFAutoShortcutEntityInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) WFContextualActionIcon *icon;
@property (readonly, nonatomic) unsigned long long badge;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 subtitle:(id)a1 icon:(id)a2 badge:(unsigned long long)a3;

@end
