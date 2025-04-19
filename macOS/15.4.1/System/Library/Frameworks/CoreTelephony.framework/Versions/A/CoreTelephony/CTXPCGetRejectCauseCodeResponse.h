@class NSNumber;

@interface CTXPCGetRejectCauseCodeResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSNumber *causeCode;

+ (id)allowedClassesForArguments;

- (id)initWithCauseCode:(id)a0;

@end
