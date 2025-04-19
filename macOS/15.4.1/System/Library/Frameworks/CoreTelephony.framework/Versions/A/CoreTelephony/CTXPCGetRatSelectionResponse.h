@class CTRatSelection;

@interface CTXPCGetRatSelectionResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTRatSelection *selection;

+ (id)allowedClassesForArguments;

- (id)initWithRATSelection:(id)a0;

@end
