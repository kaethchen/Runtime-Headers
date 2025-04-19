@class NSString, NSNumber;

@interface CSKStreamArchiveStatisticsEntry : NSObject

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *entityCount;
@property (retain, nonatomic) NSNumber *entityPercentage;

+ (id)entryWithPath:(id)a0 count:(id)a1 percentage:(id)a2;

- (id)description;
- (void).cxx_destruct;

@end
