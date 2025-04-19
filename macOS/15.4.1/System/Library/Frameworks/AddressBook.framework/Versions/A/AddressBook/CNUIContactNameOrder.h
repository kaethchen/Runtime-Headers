@class NSArray;

@interface CNUIContactNameOrder : NSObject

@property (readonly, nonatomic) NSArray *nameKeys;
@property (readonly, nonatomic) NSArray *phoneticNameKeys;

+ (BOOL)contactHasName:(id)a0;
+ (id)defaultNameOrderForContact:(id)a0;
+ (id)displayNameOrderForContact:(id)a0;
+ (id)familyNameFirstNameOrder;
+ (id)givenNameFirstNameOrder;
+ (id)namelessContactNameOrderForContact:(id)a0;

@end
