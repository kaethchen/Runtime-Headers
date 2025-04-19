@protocol SFDigestOperation;

@interface SFHMACOperation : SFMessageAuthenticationCodeOperation {
    id _hmacOperationInternal;
}

@property (copy, nonatomic) id<SFDigestOperation> digestOperation;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDigestOperation:(id)a0;

@end
