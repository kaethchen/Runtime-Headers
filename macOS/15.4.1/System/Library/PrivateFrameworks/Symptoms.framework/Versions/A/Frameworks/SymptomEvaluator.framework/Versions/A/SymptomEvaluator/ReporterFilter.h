@class NSString, NSData, NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface ReporterFilter : NSObject {
    NSObject<OS_dispatch_source> *_finalTimer;
    BOOL _timingInProgress;
    struct sym_filter { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned short x5; unsigned short x6; unsigned int x7; } *_transportFilters;
}

@property (readonly, nonatomic) unsigned int reporterId;
@property (readonly, nonatomic) NSString *reporterName;
@property (readonly, nonatomic) NSMutableArray *symptomFilters;
@property (nonatomic) BOOL symptomFilterChanged;
@property (readonly, nonatomic) NSData *filterMessage;

+ (void)initialize;
+ (void)enumerateReporterFiltersUsingBlock:(id /* block */)a0;
+ (id)filterForId:(unsigned int)a0;
+ (id)filterForName:(id)a0 id:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (int)configureSymptomFilter:(id)a0;
- (BOOL)hasFinalTimer;
- (void)pushFinalFilters;
- (void)pushTransportFilters;
- (void)setFinalTimer:(long long)a0;
- (void)setSymptomFilter:(id)a0;
- (void)updateTransportFilters;

@end
