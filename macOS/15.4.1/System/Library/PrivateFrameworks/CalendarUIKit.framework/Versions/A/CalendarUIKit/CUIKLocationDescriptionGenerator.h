@interface CUIKLocationDescriptionGenerator : NSObject

+ (id)locationStringForLocation:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2 conferenceURL:(id)a3 conferenceURLIsBroadcast:(BOOL)a4 options:(unsigned long long)a5;
+ (id)locationStringForEvent:(id)a0 options:(unsigned long long)a1 incomplete:(BOOL *)a2 leadingImageName:(id *)a3;
+ (id)locationStringForLocation:(id)a0 locationWithoutPrediction:(id)a1 preferredLocation:(id)a2 conferenceURL:(id)a3 conferenceURLIsBroadcast:(BOOL)a4;
+ (id)locationStringForEvent:(id)a0 options:(unsigned long long)a1;
+ (id)conferenceStringForURL:(id)a0 conferenceURLIsBroadcast:(BOOL)a1 options:(unsigned long long)a2;
+ (id)conferenceStringForURL:(id)a0 conferenceURLIsBroadcast:(BOOL)a1 options:(unsigned long long)a2 incomplete:(BOOL *)a3 leadingImageName:(id *)a4;
+ (id)labelForLocation:(id)a0;
+ (id)locationStringForEvent:(id)a0;

@end
