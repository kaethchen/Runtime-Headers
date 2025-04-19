@class NSString;

@interface MFDefaults : NSObject

@property (readonly, copy, nonatomic) NSString *trashMailboxName;
@property (nonatomic) long long composeMode;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)defaultNameForFlagColor:(char)a0;

- (void)dealloc;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)stringForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (long long)integerForKey:(id)a0;

@end
