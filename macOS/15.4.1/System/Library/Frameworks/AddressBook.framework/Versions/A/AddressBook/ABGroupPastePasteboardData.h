@class NSDictionary, NSArray;

@interface ABGroupPastePasteboardData : NSObject

@property (readonly, copy) NSDictionary *groupsDictionary;
@property (readonly, copy) NSDictionary *peopleDictionary;
@property (readonly, copy) NSArray *groupUids;

- (void).cxx_destruct;
- (id)initWithPasteboard:(id)a0;
- (id)initWithPeopleDictionary:(id)a0 groupsDictionary:(id)a1;

@end
