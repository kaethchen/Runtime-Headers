@class NSString, NSDate;

@interface PLSearchIndexingNormalizedWorkItem : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) short jobType;
@property (readonly, nonatomic) long long jobFlags;
@property (readonly, nonatomic) unsigned long long entityToIndex;
@property (readonly, copy, nonatomic) NSDate *timestamp;

+ (id)coalesceWorkItemA:(id)a0 itemB:(id)a1;

- (void).cxx_destruct;
- (BOOL)isRemoval;
- (id)initWithIdentifier:(id)a0 jobType:(short)a1 jobFlags:(long long)a2 entityToIndex:(unsigned long long)a3 timestamp:(id)a4;
- (BOOL)isInsert;

@end
