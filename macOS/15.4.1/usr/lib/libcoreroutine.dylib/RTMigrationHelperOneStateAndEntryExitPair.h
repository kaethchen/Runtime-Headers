@class RTStateModelOneState, RTStateModelEntryExit;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject

@property (retain, nonatomic) RTStateModelOneState *oneState;
@property (retain, nonatomic) RTStateModelEntryExit *entryExit;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOneState:(id)a0 entryExit:(id)a1;

@end
