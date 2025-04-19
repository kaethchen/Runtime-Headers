@class NSString, NSURL;

@interface SFCertificatePresentationRequest : NSObject

@property (readonly, nonatomic) struct __SecTrust { } *trust;
@property (readonly, nonatomic) struct __SecTrust { } *qwacTrust;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSURL *help;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (id)initWithTrust:(struct __SecTrust { } *)a0 qwacTrust:(struct __SecTrust { } *)a1;

@end
