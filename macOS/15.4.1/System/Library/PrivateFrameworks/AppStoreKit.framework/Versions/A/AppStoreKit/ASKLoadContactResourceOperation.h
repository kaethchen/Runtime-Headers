@class NSString;

@interface ASKLoadContactResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *contactId;

+ (double)mainScreenScale;
+ (id)supportedScheme;

- (void).cxx_destruct;
- (void)main;
- (id)initWithContactId:(id)a0;
- (id)initWithURLRequest:(id)a0 URLSession:(id)a1 dataConsumer:(id)a2;
- (id)makeFetchError;
- (id)makePlatformUnsupportedError;

@end
