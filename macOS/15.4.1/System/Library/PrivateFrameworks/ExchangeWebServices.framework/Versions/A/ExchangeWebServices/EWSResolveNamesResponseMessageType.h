@class NSArray;

@interface EWSResolveNamesResponseMessageType : EWSResponseMessageType

@property (copy, nonatomic) NSArray *ResolutionSet;

+ (id)definition;

- (void).cxx_destruct;

@end
