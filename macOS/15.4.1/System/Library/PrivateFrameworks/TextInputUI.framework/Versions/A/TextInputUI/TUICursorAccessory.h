@class NSString;

@interface TUICursorAccessory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ actionHandler;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)additionalComponents;
- (id)initWithIdentifier:(id)a0 actionHandler:(id /* block */)a1;

@end
