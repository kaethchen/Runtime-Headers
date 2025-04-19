@class NSNumber;

@interface CTXPCSimCommonNumberResultResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSNumber *result;

+ (id)allowedClassesForArguments;

- (id)initWithResult:(id)a0;

@end
