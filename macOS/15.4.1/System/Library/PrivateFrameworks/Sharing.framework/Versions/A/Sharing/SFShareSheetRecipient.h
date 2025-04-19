@class NSString, NSSet;

@interface SFShareSheetRecipient : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *realName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSSet *formattedHandles;
@property (readonly, nonatomic) NSString *contactIdentifier;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_handleFromPerson:(id)a0 withHandleValidationBlock:(id /* block */)a1;
- (id)initWithPerson:(id)a0 handleValidationBlock:(id /* block */)a1;
- (id)initWithRealName:(id)a0 displayName:(id)a1 formattedHandles:(id)a2 contactIdentifier:(id)a3;

@end
