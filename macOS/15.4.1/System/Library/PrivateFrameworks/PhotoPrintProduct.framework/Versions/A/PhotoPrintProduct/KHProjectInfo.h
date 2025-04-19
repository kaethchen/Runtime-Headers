@class NSArray, NSString, NSDictionary, KHThemeProviderConfig, NSMutableArray;

@interface KHProjectInfo : NSObject {
    NSMutableArray *_photoInfos;
    NSMutableArray *_hydrationOperations;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSArray *photoInfos;
@property (readonly, nonatomic) NSArray *hydrationOperations;
@property (retain, nonatomic) NSString *productCode;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) KHThemeProviderConfig *themeProviderConfig;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long calendarStartingMonthIndex;
@property (nonatomic) long long calendarStartingYear;
@property (nonatomic) long long calendarNumberOfMonths;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)addPhotoInfo:(id)a0;
- (void)addHydrationOperation:(id)a0;
- (void)clearHydrationOperations;

@end
