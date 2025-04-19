@class NSString, NSDictionary;

@interface IEDirectInvocation : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *userData;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 withUserData:(id)a1;

@end
