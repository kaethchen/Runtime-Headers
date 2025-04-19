@interface FI_TCommandValidation : NSObject

+ (BOOL)performIfValidated:(SEL)a0 target:(id)a1;
+ (BOOL)validateCommand:(SEL)a0 forTarget:(id)a1;
+ (BOOL)validateMenuItem:(id)a0 forTarget:(id)a1;
+ (BOOL)validateUserInterfaceItem:(id)a0 forTarget:(id)a1;

@end
