@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSMutableArray;

@interface _EDDisplayNameGroupingTrieNode : NSObject {
    NSMutableDictionary *_children;
    NSMutableArray *_addressIDs;
}

@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSDictionary *children;
@property (readonly, copy, nonatomic) NSArray *addressIDs;
@property (nonatomic) BOOL isEndOfName;

- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (id)initWithValue:(id)a0;
- (void)addAddressID:(id)a0;

@end
