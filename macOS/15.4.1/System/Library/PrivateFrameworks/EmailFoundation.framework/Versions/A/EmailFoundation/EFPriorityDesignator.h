@interface EFPriorityDesignator : NSObject

@property (class, readonly, retain) EFPriorityDesignator *currentDesignator;

@property (nonatomic) unsigned long long priority;

+ (id)currentDesignatorIfExists;
+ (id)currentDesignatorStack;
+ (id)currentDesignatorStackIfExists;
+ (void)destroyCurrentDesignator;
+ (id)installNewDesignator;
+ (id)pushNewDesignator;

@end
