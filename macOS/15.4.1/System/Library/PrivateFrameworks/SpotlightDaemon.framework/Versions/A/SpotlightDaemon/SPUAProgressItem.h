@class NSString;

@interface SPUAProgressItem : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *uaID;
@property (retain, nonatomic) NSString *relatedID;
@property (nonatomic) unsigned int expectedCount;
@property (nonatomic) unsigned int completeCount;
@property (nonatomic) unsigned int errorCount;
@property (nonatomic) unsigned int deleteCount;

+ (void)initialize;
+ (void)queueRelatedDelete:(id)a0 forBundleID:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)update:(int)a0;
- (void)add;
- (id)initWithBundleID:(id)a0 uaID:(id)a1 relatedID:(id)a2;

@end
