@interface CalendarUIKit.LocationDescriptionGenerator : NSObject

+ (id)conferenceStringFor:(id)a0 conferenceURLIsBroadcast:(BOOL)a1 options:(unsigned long long)a2 outImageName:(id *)a3 incomplete:(BOOL *)a4;
+ (id)labelFor:(id)a0;
+ (id)locationStringFor:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2 conferenceURL:(id)a3 conferenceURLIsBroadcast:(BOOL)a4 options:(unsigned long long)a5 incomplete:(BOOL *)a6 leadingImageName:(id *)a7;
+ (id)locationStringFor:(id)a0 options:(unsigned long long)a1 incomplete:(BOOL *)a2 leadingImageName:(id *)a3;

- (id)init;

@end
