@class NSArray;

@interface UINSApplicationShortcutManager : NSObject

@property (retain, nonatomic) NSArray *staticShortcutItems;
@property (retain, nonatomic) NSArray *dynamicShortcutItems;

+ (id)sharedShortcutManager;

- (void).cxx_destruct;

@end
