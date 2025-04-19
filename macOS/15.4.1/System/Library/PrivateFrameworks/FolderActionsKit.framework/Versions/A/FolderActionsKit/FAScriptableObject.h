@class NSUUID, NSString;

@interface FAScriptableObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long index;
@property (retain) NSUUID *id;
@property (retain) NSString *name;
@property BOOL objectSpecifierUsesNameBeforeID;
@property (weak) id container;
@property (retain) NSString *keyInContainer;

+ (id)keyInContainer;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectSpecifier;
- (void)resetContainmentProperties;

@end
