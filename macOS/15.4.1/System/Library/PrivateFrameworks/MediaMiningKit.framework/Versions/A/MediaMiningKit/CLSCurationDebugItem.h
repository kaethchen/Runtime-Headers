@protocol CLSCurationItem;

@interface CLSCurationDebugItem : CLSCurationDebugObject {
    unsigned long long _dedupingType;
    CLSCurationDebugItem *_dedupedDebugItem;
}

@property (retain, nonatomic) id<CLSCurationItem> item;

+ (id)stringForDedupingType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)identifier;
- (id)timestamp;
- (id)dictionaryRepresentation;
- (id)initWithItem:(id)a0;
- (void)dupeToDebugItem:(id)a0 withDedupingType:(unsigned long long)a1;

@end
