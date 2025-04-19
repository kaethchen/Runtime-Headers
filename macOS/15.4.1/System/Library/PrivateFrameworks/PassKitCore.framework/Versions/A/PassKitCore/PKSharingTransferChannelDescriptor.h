@class NSString;

@interface PKSharingTransferChannelDescriptor : PKSharingChannelDescriptor

@property (readonly, nonatomic) NSString *transferToken;

+ (BOOL)supportsSecureCoding;
+ (id)createForTransferToken:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithTransferToken:(id)a0;

@end
