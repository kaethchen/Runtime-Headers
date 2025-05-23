@class NSArray;

@interface ILMessageClassificationRequest : ILClassificationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *messageCommunications;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithMessageCommunications:(id)a0;

@end
