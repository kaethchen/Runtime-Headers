@class NSString;

@interface CNCDPhoneNumber : ABCDOwnedObject

@property (retain, nonatomic) NSString *fullNumber;
@property (readonly, nonatomic) NSString *lastFourDigits;

- (void)setFullNumber:(id)a0;

@end
