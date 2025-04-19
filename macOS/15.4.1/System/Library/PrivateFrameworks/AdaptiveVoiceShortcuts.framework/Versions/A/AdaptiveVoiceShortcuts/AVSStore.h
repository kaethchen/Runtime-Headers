@class NSDictionary, NSArray;

@interface AVSStore : NSObject

@property (class, nonatomic, readonly) NSDictionary *shortcutsNamesDictionary;
@property (class, nonatomic, readonly) NSArray *shortcuts;

- (id)init;
- (void).cxx_destruct;
- (void)deleteAllShortcuts;
- (void)deleteShortcutWithIdentifier:(id)a0;

@end
