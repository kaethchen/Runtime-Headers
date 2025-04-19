@class NSString;

@interface TUContinuityHandleAnonym : NSObject <NSSecureCoding> {
    NSString *_localizedDisplayName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) long long type;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 label:(id)a1 localizedDisplayName:(id)a2 type:(long long)a3;

@end
