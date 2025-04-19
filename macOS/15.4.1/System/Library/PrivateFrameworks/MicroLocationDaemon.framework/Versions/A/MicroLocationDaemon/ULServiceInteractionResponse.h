@class NSError, ULServiceDescriptor;

@interface ULServiceInteractionResponse : NSObject

@property (retain, nonatomic) ULServiceDescriptor *serviceDescriptor;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
