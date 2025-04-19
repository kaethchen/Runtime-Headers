@class NSData, NSArray;

@interface _WKPublicKeyCredentialDescriptor : NSObject

@property (copy, nonatomic) NSData *identifier;
@property (copy, nonatomic) NSArray *transports;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;

@end
