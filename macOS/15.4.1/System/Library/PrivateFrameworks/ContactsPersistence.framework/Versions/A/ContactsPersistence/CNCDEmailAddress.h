@class NSString;

@interface CNCDEmailAddress : ABCDOwnedObject

@property (retain, nonatomic) NSString *addressNormalized;
@property (retain, nonatomic) NSString *primitiveAddress;
@property (retain, nonatomic) NSString *address;

- (void)setAddress:(id)a0;

@end
