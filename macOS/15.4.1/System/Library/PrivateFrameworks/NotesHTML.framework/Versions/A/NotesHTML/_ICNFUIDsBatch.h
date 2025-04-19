@class NSMutableIndexSet;

@interface _ICNFUIDsBatch : NSObject

@property (retain, nonatomic) NSMutableIndexSet *uids;
@property (nonatomic) unsigned int expectedLength;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
