@class NSString;

@interface CTXPCSimCommonResultResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *result;

- (id)initWithResult:(id)a0;

@end
