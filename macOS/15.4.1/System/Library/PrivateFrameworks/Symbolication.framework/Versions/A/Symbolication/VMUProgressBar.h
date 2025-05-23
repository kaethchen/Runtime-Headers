@class NSString, NSLock;

@interface VMUProgressBar : NSObject {
    NSString *_title;
    unsigned long long _totalItems;
    NSString *_itemName;
    unsigned long long _itemsDone;
    unsigned long long _successes;
    unsigned long long _failures;
    unsigned int _color;
    NSLock *_itemCompletionLock;
}

- (id)init;
- (void).cxx_destruct;
- (void)colorize:(unsigned int)a0;
- (void)updateItemName:(id)a0;
- (void)_printProgressBar;
- (void)itemCompleteWithStatus:(BOOL)a0;
- (void)setTitle:(id)a0 withTotalItems:(unsigned long long)a1;

@end
