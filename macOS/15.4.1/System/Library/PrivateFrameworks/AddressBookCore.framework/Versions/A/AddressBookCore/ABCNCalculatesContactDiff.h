@interface ABCNCalculatesContactDiff : NSObject

+ (id)diffContact:(id)a0 to:(id)a1;
+ (void)addMultiValueUpdateTo:(id)a0 forProperty:(id)a1 contact1:(id)a2 contact2:(id)a3;
+ (void)addSingleValueUpdateTo:(id)a0 forProperty:(id)a1 contact1:(id)a2 contact2:(id)a3;

@end
