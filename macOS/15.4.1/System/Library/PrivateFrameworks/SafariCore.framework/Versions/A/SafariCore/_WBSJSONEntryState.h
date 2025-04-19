@class NSMutableSet;

@interface _WBSJSONEntryState : NSObject {
    NSMutableSet *_encodedKeys;
}

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) unsigned long long numberOfEntries;

- (void).cxx_destruct;
- (BOOL)containsKey:(id)a0;
- (id)initWithKind:(long long)a0;
- (void)addKey:(id)a0;
- (void)addEntry;

@end
