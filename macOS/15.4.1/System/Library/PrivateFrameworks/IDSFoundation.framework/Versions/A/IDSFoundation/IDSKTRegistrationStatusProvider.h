@class NSDictionary;

@interface IDSKTRegistrationStatusProvider : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *ktApplicationToKTRegStatus;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)statusForKTApplication:(id)a0;

@end
