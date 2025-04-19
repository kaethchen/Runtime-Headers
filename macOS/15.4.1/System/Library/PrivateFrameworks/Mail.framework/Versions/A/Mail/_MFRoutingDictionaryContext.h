@class NSMutableArray, NSMutableSet;

@interface _MFRoutingDictionaryContext : NSObject

@property (retain, nonatomic) NSMutableArray *transferredOrDeleted;
@property (retain, nonatomic) NSMutableArray *rejectedMessages;
@property (retain, nonatomic) NSMutableArray *messagesToBeDeleted;
@property (retain, nonatomic) NSMutableSet *destinationStores;

- (id)description;
- (void).cxx_destruct;

@end
