@class NSString;

@interface CTXPCGetCurrentRatResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *rat;

- (id)initWithRat:(id)a0;

@end
