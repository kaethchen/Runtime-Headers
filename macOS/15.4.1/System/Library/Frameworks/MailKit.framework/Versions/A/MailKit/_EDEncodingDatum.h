@class NSString;
@protocol MEMessageEncoder;

@interface _EDEncodingDatum : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<MEMessageEncoder> encoder;
@property (copy) id /* block */ extensionErrorHandler;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 encoder:(id)a1;

@end
