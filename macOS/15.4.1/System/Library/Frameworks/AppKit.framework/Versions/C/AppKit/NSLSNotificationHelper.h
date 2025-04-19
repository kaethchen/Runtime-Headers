@interface NSLSNotificationHelper : NSObject

- (id)init;
- (BOOL)addEntryAndReturnIfWasEmpty:(id)a0;
- (BOOL)isNonEmpty;
- (BOOL)removeEntryAndReturnIfEmpty:(id)a0;

@end
