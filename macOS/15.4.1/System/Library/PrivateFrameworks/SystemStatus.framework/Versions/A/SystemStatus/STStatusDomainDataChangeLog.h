@class NSOrderedSet, BSIntegerSet, NSDictionary;

@interface STStatusDomainDataChangeLog : NSObject {
    NSOrderedSet *_sortedRecordKeys;
    NSDictionary *_recordsByKey;
}

@property (readonly, nonatomic) BSIntegerSet *domainsWithData;

- (void).cxx_destruct;
- (id)currentDataForDomain:(unsigned long long)a0;
- (id)initWithRecordKeys:(id)a0;
- (id)recordForKey:(id)a0;

@end
