@class CHQuery, NSString;

@interface PKDetectionQuery : PKQuery <CHQueryDelegate>

@property (retain, nonatomic) CHQuery *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (void)teardown;
- (void)queryDidUpdateResult:(id)a0;

@end
