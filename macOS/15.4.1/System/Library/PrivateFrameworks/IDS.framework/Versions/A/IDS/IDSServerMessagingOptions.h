@class NSNumber, NSDictionary;

@interface IDSServerMessagingOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *cancelOnClientCrash;
@property (copy, nonatomic) NSDictionary *additionalTopLevelFields;
@property (retain, nonatomic) NSNumber *timeout;
@property (retain, nonatomic) NSNumber *command;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
