@class CTNRStatus;

@interface CTXPCGetNRStatusResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTNRStatus *nrStatus;

+ (id)allowedClassesForArguments;

- (id)initWithNRStatus:(id)a0;

@end
