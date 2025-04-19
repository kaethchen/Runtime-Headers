@class IMChat, NSIndexSet, NSArray;

@interface SOTranscriptItemUpdateContext : NSObject

@property (readonly, nonatomic) IMChat *chat;
@property (copy, nonatomic) NSIndexSet *addedIndexes;
@property (copy, nonatomic) NSIndexSet *updatedIndexes;
@property (copy, nonatomic) NSIndexSet *removedIndexes;
@property (copy, nonatomic) NSArray *oldItems;

- (void).cxx_destruct;
- (id)initWithChat:(id)a0;

@end
