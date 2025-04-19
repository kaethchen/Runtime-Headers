@class NSString;

@interface CTXPCGetServingPlmnResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *plmn;

- (id)initWithPlmn:(id)a0;

@end
