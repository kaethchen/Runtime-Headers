@class BMStream;

@interface ATXAppLaunches : NSObject {
    BMStream *_stream;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithStream:(id)a0;
- (id)_rawLaunchCountAndDistinctDaysLaunchedOverLast28DaysWithFilter:(id /* block */)a0;
- (id)rawLaunchCountAndDistinctDaysLaunchedOverLast28DaysForAllApps;
- (id)rawLaunchCountAndDistinctDaysLaunchedOverLast28DaysForApp:(id)a0;
- (id)rawLaunchCountAndDistinctDaysLaunchedOverLast28DaysForApps:(id)a0;
- (double)timesAppHasBeenLaunchedOverLast28Days:(id)a0;
- (double)uniqueAppsLaunchedOverLast28Days;
- (double)uniqueDaysAppHasBeenLaunchedOverLast28Days:(id)a0;

@end
