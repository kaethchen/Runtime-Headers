@class NSDateComponents;

@interface EWSWellKnownResponseObjectType : EWSResponseObjectType

@property (retain, nonatomic) NSDateComponents *ProposedStart;
@property (retain, nonatomic) NSDateComponents *ProposedEnd;

+ (id)definition;

- (void).cxx_destruct;

@end
