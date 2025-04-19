@class NSString, NSArray;

@interface BRCProgressMultiplex : NSObject {
    NSArray *_underlineProgressObjects;
}

@property (copy, nonatomic) NSString *localizedAdditionalDescription;
@property (copy, nonatomic) NSString *localizedDescription;
@property (nonatomic) long long completedUnitCount;
@property (nonatomic) long long totalUnitCount;

- (void).cxx_destruct;
- (void)setUserInfoObject:(id)a0 forKey:(id)a1;
- (BOOL)indeterminate;
- (BOOL)isPublished;
- (id)brc_dumpDescription;
- (void)brc_publish;
- (void)brc_unpublish;
- (id)initWithUnderlineProgressObjects:(id)a0;

@end
